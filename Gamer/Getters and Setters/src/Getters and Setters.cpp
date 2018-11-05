// Name : Getters.cpp

#include <iostream>
#include "Person.h"

using namespace std;

int main() {
  Person person; 
  
  person.setName("Berus");
  
  cout << person.toString() << endl;  
  
  return 0;
 }
