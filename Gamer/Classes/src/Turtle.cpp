#include <iostream>
#include "Turtle.h"

using namespace std;

void Turtle::speak() {
   if (happy) {
       cout << "WOOHOO!" << endl;
   }
   else {
	  cout << "Awww Man!" << endl;
   }
}

void Turtle::jump() {
    cout << "Jumping into the water" << endl;
}

int main() {
	return 0;
}
