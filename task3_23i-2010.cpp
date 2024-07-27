/*Write a program, which takes two 8-bit integers value and add them. Remember, you can only use bitwise
(& | ^ ~ etc.) or assignment (=) operators for this problem.
Example01:
Enter number 1: 25
Enter number 2: 63
Output: 88
Example02:
Enter number 1: 15
Enter number 2: 7
Output: 22*/
#include <iostream>

using namespace std;

int main() {
    // Input two 8-bit integers
    int number1, number2;
    cout << "Enter number 1: ";
    cin >> number1;
    cout << "Enter number 2: ";
    cin >> number2;

    // Perform bitwise addition
    while (number2 != 0) 
    {
        
        int carry =( number1 & number2);

        // Sum of bits of num1 and num2 where at least one of the bits is not set
        number1 = number1 ^ number2;

        // Carry is shifted by one so that adding it to num1 gives the required sum
        number2 = carry << 1;
    }

    // Display the result
    cout << "Output: " << number1 << endl;

    return 0;
}

