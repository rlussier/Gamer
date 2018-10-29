#include <iostream>
using namespace std;

void showMenu() {
    cout << "Continue" << endl;
    cout << "New Game" << endl;
    cout << "Options" << endl; 
    cout << "Quit" << endl; 
}

int main() {
    
    showMenu();
    
    cout << "Let's continue the journey" << endl;
    
    int input;
    cin >> input;
    
    switch (input) {
        case 1:
        cout << "Continuing ..." << endl;
        break;
        case 2:
        cout << "Starting ..." << endl;
        break;
        case 3:
        cout << "Options ..." << endl;
        break;
        case 4:
        cout << "Quitting ..." << endl;
        break;
        default: 
        cout << "Welcome back.  Please select an option." << endl;
    }
	return 0;
}
