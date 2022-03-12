/*==========================================================

 Title:       Lab4 - Giftbox to Tricity
 Course:      CSC 1100
 Author:      <Martina Santangelo>
 Date:        < 2/ 8/22 >
 Description: This program will compare the two sides of the wood planks and return 
 false or true (0 or 1) if the first greater then second, smaller than the second
 or equal to the second. Then, it will calculate the hypotenuse of the triangle
 using the pythagareon theorem.

 ==========================================================
*/

#include <iostream>
#include <cmath>// using the cmath libray
using namespace std;

int main() {
  float woodplank1;//declaring variable woodplank types, all float
  float woodplank2;
  float hypside;//declaring hypotenuse side variable

  cin >> woodplank1;// user input for the woodplank sizes
  cin >> woodplank2;

  hypside = round(sqrt((pow(woodplank1, 2.0)) + (pow(woodplank2, 2.0))));/*
  using the pythagareon theorem to find hypotenuse and pow() and sqrt function
  to square each value and find the square root, Used round() to round*/
  
  cout << (woodplank1 == woodplank2)<< endl;//comparing both sizes, are they equal
  cout << (woodplank1 < woodplank2)<< endl;//comparing sizes, is first smaller
  cout << (woodplank1 > woodplank2) << endl;//is first greater than
  cout << "The hypotenuse of triangle equals to "<< hypside; //print statement

  return 0;
}

