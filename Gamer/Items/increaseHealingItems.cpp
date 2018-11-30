#include <iostream>
    
using namespace std;
    
int main() 
{
 double healingPotion;
 double healingBerries;
    
 cout << "Enter your Potions: ";
    cin >> healingPotion;
 cout << "Enter your Berries: ";
    cin >> healingBerries;
 cout << "You increased your bag by: " << healingPotion * healingBerries << endl;
   
 return 0; 
}
