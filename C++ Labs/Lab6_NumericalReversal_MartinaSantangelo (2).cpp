/*==========================================================

Title: Lab6 - Numerical Reversal

Course: CSC 1100

Author: <Martina Santangelo>

Date: < 2/22/22>

Description: This program will allow the user to input a size for an array and create
an array with that size, allowing the user to input that amount of numbers into the 
array. Then, the program will print out the array in reverse order with spaces in 
1 line. 

==========================================================

*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
   
   int size;
   cin >> size;//input size of array
    vector<int>array;//vector 1 - original array
    vector<int>array2;// vector 2- new array
    int a;// numbers inputted
    for(int i = 0; i < size; i++){//loops through index with size as parameter
        cin >> a;//user inputs numbers (however many the size dictates)
        array.push_back(a);// adds to the array vector
    }
    
    for(auto ir= array.rbegin(); ir != array.rend(); ++ir){
        cout << *ir << " ";
    }// used rbegin() vector function and rend() vector function to start from the
    // end and go to the beginning of the vector, iterating the ir variable and 
    //printing the variable using the dereference operator (derefencing the pointer)
    return 0;

}

