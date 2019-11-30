//
//  main.cpp
//  c-playground
//
//  Created by friewerts on 30.11.19.
//  Copyright © 2019 friewerts. All rights reserved.
//

#include <iostream>
#include "classes/automat.hpp"
#include "helper/io_helper.hpp"

using namespace std;

int main(int argc, const char * argv[]) {

//  Automat("2a").runSequence("0011");
//  Automat("2b").runSequence("0011110011010");
//  Automat("2c").runSequence("01100100101");
//  Automat("2d").runSequence("001111000011101");
//  Automat("2e").runSequence("110110101010010110100");

  string userInput = getInputSequence();

  Automat("a1", true).runSequence(userInput);
  
  return 0;
}
