#include <sstream>
#include "Person.h"

Person::Person() {
  name = "undefined";
  age = 0;
}

Person::Person(string newName, int age) {
  name = newName;
  age = newAge;
}

string Person::toString() {
  stringstream ss;
  
  ss << "Name: ";
  ss << name;
  ss << "; age: ";
  ss << age;
}
