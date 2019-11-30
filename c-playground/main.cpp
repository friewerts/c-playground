//
//  main.cpp
//  c-playground
//
//  Created by friewerts on 30.11.19.
//  Copyright © 2019 friewerts. All rights reserved.
//

#include <iostream>

using namespace std;

class Automat {
  
public:
  Automat() {
    name = "Default Automat";
  }
  
  Automat(string name) {
    Automat::name = name;
  }
  
  void printname() {
    cout << "My name is: " << name;
  }
  
private:
  string name;
  
};

int main(int argc, const char * argv[]) {
  
  Automat a1;
  
  Automat a2("Automat 2");
  
  a1.printname();

  cout << endl;

  a2.printname();
  
  cout << endl;
  
  return 0;
}
