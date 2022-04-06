/*==========================================================

 Title:       Lab 11 - Arena Area Inheritance
 Course:      CSC 1100
 Author:      <Martina Santangelo>
 Date:        < 4/5/22>
 Description: This program will create two classes, one being the base/parent class
 and the other being the derived child class. The child class (class ArenaArea) will 
 read the input of the radius and also override the display function (once each respective
 method is called) on the parent class to print the area. The parent class will square the radius inputted once the display
 method is called. 
 ==========================================================
*/

#include <iostream>

using namespace std;

//Create classes Arena and ArenaArea here
class Arena{//base class arena 
    public://access specifier set to public so child class can access variables
    double radius;//radius variable initialized
    double r;// this will be the radius squared 
    void display(){//display method will print the radius squared
    r = radius*radius;//radius squared set to variable r
        cout << r << endl;//printing variable r 
    }
};
class ArenaArea: public Arena{//child class inherited from Arena class
    public://access specifier set to public
    /*double r;// radius variable passed */
    double area;// initializing variable area
    void scan_input(){// scan_input method created 
        cin >> radius;//reading radius input
    }
    void display(){
        area = 3.14 * r;// area equation set equal to area variable
        cout << area;//printing area
    }
};


int main()
{
    //DO NOT MODIFY ANYTHING IN THE main() !!!
    
    ArenaArea stadium; //Declaring ArenaArea object stadium
    
    stadium.scan_input(); //Read the radius input
    
    stadium.Arena::display(); //Print the radius squared
    
    cout << endl;
    
    stadium.display(); //Print the area of the Arena (stadium) object
    
    return 0;
}


