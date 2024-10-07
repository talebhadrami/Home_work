#include <iostream>
using namespace std;

int main() {
     long number;

    // Enter a number in the range from 1000 to 999999999
    do {
        cout << " Please enter a number between 1000 and 999999999:";
        cin >> number;
    } while (number < 1000 || number > 999999999);
    
    char choice;

    do {
        cout << "\nOptions menu:\n";
        cout << "1. Enter a number in the range between 1000 and 999999"<<endl;
        cout << "2. Print the digits of a number in reverse order\n";
        cout << "3. Count the number of digits\n";
        cout << "4. Find the smallest and largest digits\n";
        cout << "5. Calculate the sum of the digits of a number\n";
        cout << "6. Find the product of odd digits\n";
        cout << "7. Calculate the inverse version of a number\n";
        cout << "Select an option (1-7): ";
        int option;
        cin >> option;

        switch (option) {
            case 1:{
                long tempNumber=number;
                if(tempNumber>1000 && tempNumber<999999999){
                    cout<<"the nomber its in this range";
                }else{
                    cout<<"the nombre is not in this range";
                }
            }
            case 2: {
        
                cout << "The digits of a number in reverse order: ";
                 long tempNumber = number;
                while (tempNumber > 0) {
                    cout << tempNumber % 10 << " ";
                    tempNumber /= 10;
                }
                cout << endl;
                break;
            }
            case 3: {
                
                 long tempNumber = number;
                int digitCount = 0;
                while (tempNumber > 0) {
                    digitCount++;
                    tempNumber /= 10;
                }
                cout << "num digits its : " << digitCount << endl;
                break;
            }
            case 4: {
                  // Find the smallest and largest digits
                long long tempNumber = number;
                int minDigit = 9, maxDigit = 0;
                while (tempNumber > 0) {
                    int currentDigit = tempNumber % 10;
                    if (currentDigit < minDigit) minDigit = currentDigit;
                    if (currentDigit > maxDigit) maxDigit = currentDigit;
                    tempNumber /= 10;
                }
                cout << "Smallest digit: " << minDigit << endl;
                cout << "Largest digit: " << maxDigit << endl;
                
                break;
            }
            case 5: {
                
                 long tempNumber = number;
                int sumDigits = 0;
                while (tempNumber > 0) {
                    sumDigits += tempNumber % 10;
                    tempNumber /= 10;
                }
                cout << "somme digits" << sumDigits << endl;
                break;
            }
            case 6: {
                
                 long tempNumber = number;
                int productOddDigits = 1;
                bool hasOddDigits = false;
                while (tempNumber > 0) {
                    int currentDigit = tempNumber % 10;
                    if (currentDigit % 2 != 0) {
                        productOddDigits *= currentDigit;
                        hasOddDigits = true;
                    }
                    tempNumber /= 10;
                }
                if (hasOddDigits) {
                    cout << "product odd digits its  " << productOddDigits << endl;
                } else {
                    cout << "There are no odd numbers.\n";
                }
                break;
            }
            case 7: {
                
                long long tempNumber = number;
                long long reversedNumber = 0;
                while (tempNumber > 0) {
                    reversedNumber = reversedNumber * 10 + tempNumber % 10;
                    tempNumber /= 10;
                }
                cout << "Reversed version of the number: " << reversedNumber << endl;
                break;
            }
            default: {
                cout << "Invalid option. Try again.\n";
                break;
            }
        }

        // question for continuation
        cout << "Do you want to continue? [Y|N]: ";
        cin >> choice;
        
    } while (choice == 'Y' || choice == 'y');

    cout << "The program is complete." << endl;
    return 0;
}