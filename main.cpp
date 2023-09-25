#include <iostream>


using namespace std;

int main() {
    int Num1, Num2, result;
    char mathOpr, response;
  

    do {
        cout << "Enter num1: ";
        cin >> Num1;
    
        cout << "Enter num2: ";
        cin >> Num2;
    
        cout << "Enter mathOpr (+, -, /, *): ";
        cin >> mathOpr;
    
        if (mathOpr == '+') {
            result = Num1 + Num2;
        } else if (mathOpr == '-') {
            result = Num1 - Num2;
        } else if (mathOpr == '/') {
            if (Num2 != 0) {
                result = Num1 / Num2;
            } else {
                cout << "Division by zero is not allowed." << endl;
                return 1;
            }
        } else if (mathOpr == '*') {
            result = Num1 * Num2;
        } else {
            cout << "Invalid Math Operation" << endl;
            return 1;
        }
    
        cout << "Final Result: " << result << endl;
    
        cout << "Do you have additional questions? (y/n): ";
        cin >> response;
    } while (response == 'y' || response == 'Y');

    return 0;
}
