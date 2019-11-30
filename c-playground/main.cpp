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
  
  Automat a2a("Automat 2a");
  Automat a2b("Automat 2b");
  Automat a2c("Automat 2c");
  Automat a2d("Automat 2d");
  Automat a2e("Automat 2e");
  
  a2a.getState("0011");
  a2b.getState("0011110011010");
  a2c.getState("01100100101");
  a2d.getState("001111000011101");
  a2e.getState("110110101010010110100");
  return 0;
}
