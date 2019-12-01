//
//  state.hpp
//  dtm
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
  
private:
  string name;
  map<char, State*> neighbours;
  
public:
  State(string name) {
    State::name = name;
  }
  
  string getName() {
    return name;
  }
  
  void addNeighbour(char name, State* newNeighbour) {
    neighbours.insert(make_pair(name, newNeighbour));
  }
  
  State* transition(char input) {
    bool hasNeigbour = neighbours.count(input) != 0;

    return hasNeigbour ? neighbours.find(input)->second : this;
  }
};

#endif /* state_hpp */
