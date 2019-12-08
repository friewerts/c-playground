//
//  automat.hpp
//  dtm
//
//  Created by friewerts on 30.11.19.
//  Copyright © 2019 friewerts. All rights reserved.
//

#ifndef automat_hpp
#define automat_hpp

#include <stdio.h>
#include <iostream>
#include "state.hpp"

using namespace std;

class Automat {
  
private:
  string name;
  State* currentState;
  State* finalState;
  
  void init(string name, bool showTransitions) {
    Automat::name = name;
    Automat::showTransitions = showTransitions;
    initStates();
  }
  
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
    finalState = s5;
  }
  
public:
  bool showTransitions = false;

  Automat() {
    init("Default Automat", false);
  }
  
  Automat(string name) {
    init(name, false);
  }
  
  Automat(string name, bool showTransitions) {
    init(name, showTransitions);
  }
  
  bool inFinalState() {
    return currentState == finalState;
  }
  
  void runSequence(string input) {
    getState(input);

    cout << "This is" << (inFinalState() ? "" : " not") << " the final state!" << endl;
  }
  
  void getState(string input) {
    cout << (showTransitions ? currentState->getName() : "");
    for (char const &c: input) {
      currentState = currentState->transition(c);
      if (showTransitions) cout << " => " << currentState->getName();
    }
    cout << (showTransitions ? "\n" : "") << "Machine finished in state: " << currentState->getName() << endl;
  }
};

#endif /* automat_hpp */
