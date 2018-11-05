#include <sstream>
#include "Person.h"

Person::Person() {
  name = "undefined";
  age = 0;
}

string Person::toString() {
  stringstream ss;
  
  ss << "Name: ";
  ss << name;
  ss << "; age: ";
  ss << age;
}
