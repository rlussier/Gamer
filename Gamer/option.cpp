#include <iostream>
using namespace std;

int main() {
    
    cout << "Continue" << endl;
    cout << "New Game" << endl;
    cout << "Options" << endl;
    
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
        default: 
        cout << "Welcome back.  Please select an option." << endl;
    }
	return 0;
}
