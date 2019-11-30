//
//  main.cpp
//  c-playground
//
//  Created by friewerts on 30.11.19.
//  Copyright © 2019 friewerts. All rights reserved.
//

#include <iostream>
#include "automat.hpp"
#include "state.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
  
  Automat a1;
  
  Automat a2("Automat 2");
  
  a1.printname();
  a1.printStates();

  return 0;
}
