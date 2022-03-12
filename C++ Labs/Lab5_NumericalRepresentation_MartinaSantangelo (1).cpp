/*==========================================================

Title: Lab5 - Numerical Representation

Course: CSC 1100

Author: <Martina Santangelo>

Date: < 2/15 /22 >

Description: This program will print the user inputted
number's range in a word representation 
and print even or odd for each next number if the number nine is surpassed
==========================================================

*/

#include <iostream>

using namespace std;
int main() {
int a, b;
int range;
cin >> a;//user input number a 
cin >> b;// user input number b
range = b-a;//range
switch(a) {//using switch to check a 
    case 1:// for each case print the corresponding word version of number
    cout << "one\n";
    if (b == 1){// if b is equal to this number break or stop counting
        break;
    }
    case 2:
    cout << "two\n";{
        if (b == 2){
            break;
        }
    case 3:
    cout << "three\n";
    if (b == 3){
        break;
    }
    case 4:
    cout << "four\n";
    if (b == 4){
        break;
    }
    case 5:
    cout << "five\n";
    if (b == 5){
        break;
    }
    case 6:
    cout << "six\n";
    if (b == 6){
        break;
    }
    case 7:
    cout << "seven\n";
    if (b == 7){
        break;
    }
    case 8:
    cout << "eight\n";
    if (b==8){
        break;
    }
    case 9:
    cout << "nine\n";
    if (b == 9){
        break;
    }
    default:// default to checking if every next number after 9 is even or odd
    for (int i = 10; i <= b; i ++){//starting from 10, print if next number is even or odd
        if (i % 2 == 0){// if remainder is 0 it is even
            cout << "even"<< endl;
        }
        else{
            cout << "odd" << endl;// else odd
        }
    }
    
}
}
return 0;

}
