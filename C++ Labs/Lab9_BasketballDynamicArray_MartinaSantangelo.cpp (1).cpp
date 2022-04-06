/*==========================================================

 Title:       Lab 9 - C++ Basketball Season
 Course:      CSC 1100
 Author:      <Martina Santangelo>
 Date:        <3/22/22 >
 Description: This program will create a dynamic array and alter a 
 specific game (or position) to add another user inputted value(points added), and
 then print the final array and the total scores (all elements added).

 ==========================================================
*/

#include <iostream>
using namespace std;

//write your functions ...
void alterGameScore(int *pArr, int numberofGame){
    int k;//value to be added declared
    cin >> k;//user inputted value for how many points added
    int i =numberofGame;
    *(pArr + i) = *(pArr + numberofGame) + k;//using dynamic array notation to the element
}
int totalScore(int *pArr, int SIZE){
int total = 0;
for(int i = 0; i < SIZE; i++){
 total += *(pArr + i);//every value being added to the variable total through a loop
}
return total;
}
void printScores(int *pArr, int SIZE){
   for(int i=0;i < SIZE; i++){
       cout << *(pArr + i) << " ";//printing the array using dynamic array notation
   }
}



int main() {

    const int SIZE = 5;
    int* pArr;
    pArr = new int[SIZE];
    int numberOfGame;

    for (int i = 0; i < SIZE; i++) 
            *(pArr + i) = ((i + 2) * 10) + (i + 1); 

    //cout << "Enter game to check: ";
    cin >> numberOfGame;
    
    alterGameScore(pArr, numberOfGame - 1);
    //cout << "new value: ";
    cout << *(pArr + numberOfGame - 1) << endl;
    
    printScores(pArr, SIZE);
    
    //cout << "\ntotal Score: ";
    cout << endl << totalScore(pArr, SIZE);

}

