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

  State(string name) {
    State::name = name;
  }
  
  void printname() {
    cout << "State is: " << name << endl;
  }
  
};

#endif /* state_hpp */
