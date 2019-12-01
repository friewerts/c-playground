//
//  main.cpp
//  call-by
//
//  Created by friewerts on 01.12.19.
//  Copyright © 2019 friewerts. All rights reserved.
//

#include <iostream>

using namespace std;

int addOne(int& number) {
  number = number + 1;
  return number;
}

int addTwo(int number) {
  number = number + 2;
  return number;
}

int main(int argc, const char * argv[]) {
  
  int a = 1;
  
  // call by reference
  int b = addOne(a);
  
  cout << "Added One a: " << a << endl;
  cout << "Added One b: " << b << endl;
  
  int c = addTwo(a);
  
  // call by value
  cout << "Added Two a: " << a << endl;
  cout << "Added Two c: " << c << endl;
  
  return 0;
}
