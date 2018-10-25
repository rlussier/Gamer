#include <iostream>
using namespace std;

int main() {
    
    int values[] = {2, 8, 5, 4};
    
    cout << sizeof(values) << endl;
    cout << sizeof(int) << endl;
    
    for(unsigned int i=0; i< sizeof(values)/sizeof(int); i++) {
        cout << values[i] << " " << flush;
    }
        
    cout << endl;
        
	return 0;
}
