#include <iostream>

using namespace std;

int main()
{
  char answer;
  cout << "Would you like some training? (type yes or no)\n";
  cin >> answer;
  
  if(answer == 'yes')
  {
    int training;
    cout << "What do you need help with" << endl;
    cin >> training;
    cout << training << ", huh! then let's begin.";
  } else {
    cout << "Well then, carry on.";
  }
  
  return 0;
}
