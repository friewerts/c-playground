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

bool validateInput(string input) {
  bool isValid = true;

  for (char const &c: input) {
    isValid &= (c == '0' || c == '1');
  }

  return isValid;
}

string getSequence() {
  string userInput;
  
  cout << "Enter Sequence:";
  cin >> userInput;
  
  if (validateInput(userInput)) {
    cout << "Input valid!" << endl;
    return userInput;
  }
  else {
    cout << "Input invalid! Try again only using the digits 0 and 1." << endl;
    return getSequence();
  }
}

int main(int argc, const char * argv[]) {

//  Automat("2a").runSequence("0011");
//  Automat("2b").runSequence("0011110011010");
//  Automat("2c").runSequence("01100100101");
//  Automat("2d").runSequence("001111000011101");
//  Automat("2e").runSequence("110110101010010110100");

  string userInput = getSequence();
  
  Automat a1;

  // optionaly show all Transitions
  // a1.showTransitions = true;

  a1.runSequence(userInput);
  
  return 0;
}
