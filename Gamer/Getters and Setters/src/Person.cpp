* Person.cpp

#include "Person.h"

Person::Person() {
  //TODO Auto-generated constructor stub
  name = "Kuvira";
  
  }

string Person::toString() {
  return "Person's name is : " + name;
}

void Person::setName(string newName) {
  name = newName;
}

string Person::getName() {
  return name;
}
