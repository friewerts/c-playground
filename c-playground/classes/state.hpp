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
  
};

#endif /* state_hpp */
