//
//  automat.hpp
//  c-playground
//
//  Created by friewerts on 30.11.19.
//  Copyright © 2019 friewerts. All rights reserved.
//

#ifndef automat_hpp
#define automat_hpp

#include <stdio.h>
#include <iostream>
#include <map>
#include <string>
#include <iterator>
#include "state.hpp"

using namespace std;

class Automat {
  
private:
  string name;
  State* currentState;
  
  void initStates() {
    // initialize States
    State* s1 = new State("A");
    State* s2 = new State("B");
    State* s3 = new State("C");
    State* s4 = new State("D");
    State* s5 = new State("E");

    // Add Edges
    s1->addNeighbour('0', s2);
    s1->addNeighbour('1', s5);
    
    s2->addNeighbour('0', s3);
    s2->addNeighbour('1', s5);
    
    s3->addNeighbour('0', s3);
    s3->addNeighbour('1', s4);
    
    s4->addNeighbour('0', s4);
    s4->addNeighbour('1', s3);
    
    s5->addNeighbour('0', s5);
    s5->addNeighbour('1', s5);

    currentState = s1;
  }
  
public:
  Automat() {
    name = "Default Automat";
    initStates();
  }
  
  Automat(string name) {
    Automat::name = name;
    initStates();
  }
  
  void getState(string input) {
    for (char const &c: input) {
      currentState = currentState->transition(c);
    }
    cout << "The new State is: " << currentState->name << endl;
  }
  
  void printname() {
    cout << "My name is: " << name << endl;
  }
  
};

#endif /* automat_hpp */
