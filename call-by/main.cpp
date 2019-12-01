//
//  main.cpp
//  call-by
//
//  Created by friewerts on 01.12.19.
//  Copyright © 2019 friewerts. All rights reserved.
//

#include <iostream>

using namespace std;

void addOne(int& number) {
  number = number + 1;
}

void addTwo(int number) {
  number = number + 2;
}

int main(int argc, const char * argv[]) {
  
  int a = 1;
  
  // call by reference
  addOne(a);
  
  cout << "Added One: " << a << endl;
  
  addTwo(a);
  
  // call by value
  cout << "Added Two: " << a << endl;
  
  return 0;
}
