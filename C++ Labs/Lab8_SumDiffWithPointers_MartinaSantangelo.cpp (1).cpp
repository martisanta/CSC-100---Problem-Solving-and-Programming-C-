/*==========================================================

 Title:       Lab 8 - Sum/Difference with Pointer
 Course:      CSC 1100
 Author:      <Martina Santangelo>
 Date:        < 3/8 /22 >
 Description: This program will modify two pointers declared in the main function
 and make it so the x is the sum of the two arguements and the y is the 
 absolute value of the difference. 

 ==========================================================
*/
#include <iostream>
#include <cmath>
using namespace std;

void Modify(int *x, int *y) {
    int temp;//temporary variable
    temp = *y;// assigned to y 
    *y = abs(*x - *y);//absolute value of the difference
    *x = *x + temp;//sum of the temporary variable and x pointer
}

int main() {
    //DO NOT MODIFY ANYTHING IN THE main() !!!
    
    int x, y;
    
    int *ptr_x = &x;
    int *ptr_y = &y;
    
    cin >> x;
    cin >> y;
    
    Modify(ptr_x, ptr_y);
    
    cout << x << endl;
    cout << y;
                 
    return 0;
}

