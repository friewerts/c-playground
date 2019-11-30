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
  std::map<string, State> stateMap;
  
public:
  Automat() {
    name = "Default Automat";
    initStates();
  }
  
  Automat(string name) {
    Automat::name = name;
    initStates();
  }
  
  void printname() {
    cout << "My name is: " << name << endl;
  }

  void printStates() {
    cout << "My state is: " << stateMap.find("A")->second.name << endl;
  }
  
  void initStates() {
    State s1("A");
    State s2("B");
    State s3("C");
    stateMap.insert(make_pair("A", s2));
  }
  
};

#endif /* automat_hpp */
