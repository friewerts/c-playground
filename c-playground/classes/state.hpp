//
//  state.hpp
//  c-playground
//
//  Created by friewerts on 30.11.19.
//  Copyright © 2019 friewerts. All rights reserved.
//

#ifndef state_hpp
#define state_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class State {
  
public:
  
  string name;
  map<char, State*> neighbours;

  State(string name) {
    State::name = name;
  }
  
  void addNeighbour(char name, State* newNeighbour) {
    neighbours.insert(make_pair(name, newNeighbour));
  }
  
  State* transition(char input) {
    bool hasNeigbour = neighbours.count(input) != 0;
    if (hasNeigbour) {
      return neighbours.find(input)->second;
    }
    
    return this;
  }
  
  void introduceYourself() {
    cout << "==State==" << endl;
    printName();
    printNeigbours();
  }
  
  void printName() {
    cout << "Name: " << name << endl;
  }
  
  void printNeigbours() {
    cout << "Neigbours: " << endl;
    for (map<char, State*>::iterator it=neighbours.begin(); it!=neighbours.end(); ++it) {
      std::cout << it->first << " => " << it->second->name << '\n';
    }
  }
  
};

#endif /* state_hpp */
