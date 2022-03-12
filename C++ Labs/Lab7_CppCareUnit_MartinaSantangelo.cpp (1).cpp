/*==========================================================

 Title:       Lab 7 - C++ Care Unit
 Course:      CSC 1100
 Author:      <Martina Santangelo>
 Date:        <3 /1 / 22>
 Description: This program will return height in meters, bmi with a constant 
 height (1.8) and bmi with an inputted height in meters, finally it will swap the values
 of the two final weights and do so using the pass by reference (using the ampersand
 symbol). Finally the main function will print the BMI pf the twins before and after. 

 ==========================================================
*/

#include <iostream>
using namespace std;


// Write functions here

double conversionMeters(double h){// takes height in feet divides by 3.281 to get meters
    double hmeter; 
    hmeter = h / 3.281;
    return hmeter;
}
double BMIcalculator(double w1){// takes the BMI using BMI formula with constant height 
    double BMI;
    BMI = w1 / (1.8 * 1.8);
    return BMI;
}
double BMIcalculator(double w2, double h){// function overloading of the function above
    double BMI; 
    BMI = w2 / (h * h);// instead of constant height it divides by inputted height in meters
    return BMI;
}
void swap(double &w1, double &w2){// void function that takes the reference of the two heights
    double temp = w1;// temporary variable used to swap values 
    w1 = w2;
    w2 = temp; 
}

int main() {
    double w1, w2, h;
    cin >> w1 >> w2 >> h;

    float index1 = BMIcalculator(w1);
    float index2 = BMIcalculator(w2, conversionMeters(h));

    cout << index1 << " " << index2 << endl;

    swap(w1, w2);

    index1 = BMIcalculator(w1);
    index2 = BMIcalculator(w2, conversionMeters(h));
    cout << index1 << " " << index2 << endl;
}

