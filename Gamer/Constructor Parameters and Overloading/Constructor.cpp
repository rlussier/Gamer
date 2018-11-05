#include <iostream>
 #include "Person.h"

 using namespace std;
 
 int main() {
  
  Person person1;
  Person person2("Berus");
    Person person2("Lexi", 17);
  
  cout << person1.toString(); << endl; 
  cout << person2.toString(); << endl; 
  cout << person3.toString(); << endl; 
  
  return 0;
 }
