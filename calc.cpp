#include <iostream>

using namespace std;

int main(void) {
    
    cout << "Calculator usage example" << endl;
    cout << "Please enter expression like in example: 2 + 2" << endl;
    float x, y, r;
    char s;
    
    cin >> x;
    cin >> s;
    cin >> y;
    
    switch(s) {
        case '+': 
        {
            r = x + y;
            break;
        }
        case '-': 
        {
            r = x - y;
            break;
        }
        case '*': 
        {
            r = x * y;
            break;
        }
        case '/': 
        {
            r = x / y;
            if(y == 0) {
                cout << "Error divsion by 0" << endl;
                return 1;
            }
            break;
        }
    }
    
    cout << x << s << y << " = " << r << endl;
}