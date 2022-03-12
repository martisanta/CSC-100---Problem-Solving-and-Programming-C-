/*==========================================================

Title: Lab2 - Output Manipulation

Course: CSC 1100

Author: <Martina Santangelo>

Date: < 1/25/22 >

Description: This program will use the iomanip library, and specifically 
setfill and setw functions to print the words "ten" and "fourfour" with
10 spaces apart, and print 80 dashes (using setfill and setw)

==========================================================

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

cout<< "ten"<< setw(21) << "fourfour"<<endl;/*printing "ten" and "fourfour"
seperated by 10 spaces (taking into account character count of the two words)*/
cout<<setfill('-')<<setw(80);/*using setfill and setw to set a width of 80
and fill it with dashes*/
cout<<"";//allows the dashes to show up in the output
//write your code here and include comments to explain your solution

return 0;

}

