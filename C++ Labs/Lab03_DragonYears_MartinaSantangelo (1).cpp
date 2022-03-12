/*==========================================================

 Title:       Lab3 - Dragon Years
 Course:      CSC 1100
 Author:      Martina Santangelo
 Date:        < 2/ 1/ 22>
 Description: This program will print the name and the age of the dragon and then
 print the dragon age in wizards years.

 ==========================================================
*/

#include <iostream>
using namespace std;

int main() {
 string name;// create string variable
 float age;// vreate age variable float
 float dragonage;// create dragonage variable float
 cin >> name;// enter name
 cin >> age;// enter age
 age -= 2;// subtract 2 years from age
 dragonage = (4 * age) + 21;// formula for dragon age
  cout << "The dragon named "<< name<< " is "<< dragonage << " years old in wizard years."; 


  return 0;
}



