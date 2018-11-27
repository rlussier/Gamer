#include <iostream>

using namespace std;

int main() 
{
    int healingPotion;
    int healingBerries;
    
    cout << "How many potions do you have: ";
    cin >> healingPotion;
    
    cout << "How many berries do you have: ";
    cin >> healingBerries;
    
    cout << "You have a total of " << healingPotion + healingBerries << " healing items";
    
    return 0;
}
