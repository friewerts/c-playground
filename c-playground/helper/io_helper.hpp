//
//  io_helper.hpp
//  c-playground
//
//  Created by friewerts on 30.11.19.
//  Copyright © 2019 friewerts. All rights reserved.
//

#ifndef io_helper_hpp
#define io_helper_hpp

#include <iostream>

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
  
  cout << "Enter Sequence: ";
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

#endif /* io_helper_hpp */
