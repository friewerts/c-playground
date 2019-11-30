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

  Automat("2a").getState("0011");
  Automat("2b").getState("0011110011010");
  Automat("2c").getState("01100100101");
  Automat("2d").getState("001111000011101");
  Automat("2e").getState("110110101010010110100");

  return 0;
}
