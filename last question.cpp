#include <iostream>
using namespace std;

// Function Declarations
void addFractions(int num1, int den1, int num2, int den2);
void subtractFractions(int num1, int den1, int num2, int den2);
void multiplyFractions(int num1, int den1, int num2, int den2);
void divideFractions(int num1, int den1, int num2, int den2);
void addFraction(int num1, int den1, int num2);
void subFraction(int num1, int den1, int num2);



// Main function
int main() {
    int choice;
    int num1, den1, num2, den2;

    do {
        cout << "Fraction Calculator Menu:" << endl;
        cout << "1. Add Fractions" << endl;
        cout << "2. Subtract Fractions" << endl;
        cout << "3. Multiply Fractions" << endl;
        cout << "4. Divide Fractions" << endl;
        cout << "5. x/y + x" << endl;
        cout << "6. x/y - x" << endl;
        cout<< "7 exit programm";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter the first fraction (numerator denominator): ";
            cin >> num1 >> den1;
            cout << "Enter the second fraction (numerator denominator): ";
            cin >> num2 >> den2;
        }
        else if(choice >4  && choice <= 6){
        	 cout << "Enter the first fraction (numerator denominator): ";
            cin >> num1 >> den1;
            cout << "Enter the second fraction (numerator denominator): ";
            cin >> num2 ;
		}

        switch (choice) {
            case 1:
                addFractions(num1, den1, num2, den2);
                break;
            case 2:
                subtractFractions(num1, den1, num2, den2);
                break;
            case 3:
                multiplyFractions(num1, den1, num2, den2);
                break;
            case 4:
                divideFractions(num1, den1, num2, den2);
                break;

                case 5:
                	
                addFraction(num1, den1, num2);
                break;
                
                case 6:
                	subFraction(num1,den1,num2);
                	break;
                
                case 7:
                	cout<<"bye programm exit";
                	break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 7);

    return 0;
}

// Function Definitions

void addFraction(int num1, int den1, int num2) {
    int result_num = num1*den1+num2;
    int result_den = den1;
    cout << "Result: " << result_num << "/" << result_den << endl;
}

void subFraction(int num1, int den1, int num2) {
    int result_num = num1*den1-num2;
    int result_den = den1;
    cout << "Result: " << result_num << "/" << result_den << endl;
}
// Function to add two fractions
void addFractions(int num1, int den1, int num2, int den2) {
    int result_num = num1 * den2 + num2 * den1;
    int result_den = den1 * den2;
    cout << "Result: " << result_num << "/" << result_den << endl;
}

// Function to subtract two fractions
void subtractFractions(int num1, int den1, int num2, int den2) {
    int result_num = num1 * den2 - num2 * den1;
    int result_den = den1 * den2;

    cout << "Result: " << result_num << "/" << result_den << endl;
}

// Function to multiply two fractions
void multiplyFractions(int num1, int den1, int num2, int den2) {
    int result_num = num1 * num2;
    int result_den = den1 * den2;
    cout << "Result: " << result_num << "/" << result_den << endl;
}

// Function to divide two fractions
void divideFractions(int num1, int den1, int num2, int den2) {
    // Check for division by zero
    if (num2 == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return;
    }

    int result_num = num1 * den2;
    int result_den = den1 * num2;


    cout << "Result: " << result_num << "/" << result_den << endl;
}
