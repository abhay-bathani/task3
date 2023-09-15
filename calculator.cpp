#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main() {
    int choice;
    long long int result, num1, num2;
    float sinValue, cosValue, tanValue;

    do {
        cout << "Calculator Menu:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Power" << endl;
        cout << "6. sin" << endl;
        cout << "7. cos" << endl;
        cout << "8. tan" << endl;
        cout << "9. log (base 2)" << endl;
        cout << "10. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 10) {
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        }

        if (choice < 1 || choice > 9) {
            cout << "Invalid choice." << endl;
            continue;
        }

        switch (choice) {
            case 1:
                cout << "Enter first operand: ";
                cin >> num1;

                cout << "Enter second operand: ";
                cin >> num2;

                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;
            case 2:
                cout << "Enter first operand: ";
                cin >> num1;

                cout << "Enter second operand: ";
                cin >> num2;

                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;
            case 3:
                cout << "Enter first operand: ";
                cin >> num1;

                cout << "Enter second operand: ";
                cin >> num2;

                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;
            case 4:
                cout << "Enter first operand: ";
                cin >> num1;

                cout << "Enter second operand: ";
                cin >> num2;

                if (num2 == 0) {
                    cout << "Error: Division by zero is not allowed." << endl;
                } else {
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                }
                break;

            case 5:
                cout << "Enter the number for calculating its power: ";
                cin >> num1;
                cout << "Enter the power for a number: ";
                cin >> num2;
                result = pow(num1, num2);
                cout << "Result: " << result << endl;
                break;

            case 6:
                float a;
                cout << "Enter the number for calculating SIN: ";
                cin >> a;
                sinValue = sin(a);
                cout << "Result: " << sinValue << endl;
                break;

            case 7:
                float b;
                cout << "Enter the number for calculating COS: ";
                cin >> b;
                cosValue = cos(b);
                cout << "Result: " << cosValue << endl;
                break;

            case 8:
                float c;
                cout << "Enter the number for calculating TAN: ";
                cin >> c;
                tanValue = tan(c);
                cout << "Result: " << tanValue << endl;
                break;

            case 9:
                float d;
                cout << "Enter the number for calculating LOG (base 2): ";
                cin >> d;
                float logValue = log2(d);
                cout << "Result: " << logValue << endl;
                break;
        }
    } while (choice != 10);
 
 return 0;
}