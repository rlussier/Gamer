#include <iostream>

using namespace std;

int main()
{
  int userName;
  cout << "What is your username?";
  cin << userName;
  
  if(userName == true) 
  {
    cout << "Welcome back!";
  } else {
    cout << "Wrong username";
  }
  
  return 0;
}
