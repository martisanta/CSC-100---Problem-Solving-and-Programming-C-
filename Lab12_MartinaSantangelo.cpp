/*==========================================================

 Title:       Lab 12 - C++ Wizard Creature Department
 Course:      CSC 1100
 Author:      <Martina Santangelo>
 Date:        <4/14 /2022 >
 Description: This program will create a base class and two derived classes for each 
 creature. The classes will have attributes such as name, quantity, and creaturetype.
 It will pass protected variables using set and get functions and allow for the user
 to input 2 elements in an array for names (the 3rd will be the name "clover"). Finally, 
 this program will print a formatted table of the creaturetype, name and quantity.
 

 ==========================================================
*/


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//create classes.....
 class Creature{//base class initialized
     protected://access specifier set to protected (only accessible to inherited classes)
     string name;//attributes defined
     int quantity;
     string creaturetype = "unknown";
     public://access specifier set to public for functions
     void setName(string n){//set function for Name
        name = n; 
     }
     string getName(){//get function for name attribute
        return name;
     }
     void setQuantity(int q){//set function for quantity
         if(q < 0){//q must be positive or it will be turned positive
         quantity = q * -1;
     }
     else{
         quantity = q;
     }
     }
     int getQuantity(){//get function for quantity
         return quantity;
     }
     void printStatement(){//formatted print statement using setfill/setw
          cout << creaturetype << setfill(' ')<< setw(11 + name.length())<< name<< setfill(' ')<< setw(34-name.length())<<quantity<< endl;
     }
     Creature(string n, int q){//constructors
         name = n;
         quantity = q;
     }
    Creature(){
     }
    Creature(string n, int q, string c){
        name = n;
        quantity = q;
    }
 };

 class Phoenix: public Creature{//phoenix class derived from creature class
     public://access specifier to public
     string creaturetype = "phoenix";//attributes defined
     string color;
     void setColor(string col){//color function set/get pair
         color = col;
     }
     string getColor(){
         return color;
     }
     void printStatement(){//formatted print statement- override
         cout << creaturetype << setfill(' ')<< setw(11 + name.length())<< name<< setfill(' ')<< setw(34 -name.length())<<quantity<< endl;
     }
     
 };
 class Basilisk: public Creature{//Basilisk child class 
     public://access specifier to public
     string creaturetype = "basilisk";// attributes defined
     void printStatement(){//formatted print statement- override
         quantity = 1;
          cout << creaturetype << setfill(' ')<< setw(10 + name.length())<< name<< setfill(' ')<< setw(34 -name.length())<<quantity<< endl;
     }
 };
int main() {

    //create array of size 3 for storing name
    string nameArr[3];//array defined with 3 elements

    //call loop to record user input as names
    // sets third name to “Clover”
    for(int i =0; i< 3; i++){//for loop with user input
        if (i == 2){//if third element (index is 2) the name is clover
            nameArr[i] = "Clover";
            break;
        }
        cin >> nameArr[i];
    }
cout<<"CreatureType"<<setfill(' ')<<setw(10)<<"Name"<<setfill(' ')<<setw(30)<< "Quantity"<< endl;
cout << setfill('_') << setw(52) << "_"<< endl;//Header for the table printed
    //first object fro class Creature
    Creature c(nameArr[0], 2);// object of creature class created with name and quantity
    //print statement from class
    c.printStatement();


    //creation of object from class Phoenix
    Phoenix p;//object of phoenix class created
    //sets name, quantity and color
    p.setName(nameArr[1]);//setName function called
    p.setQuantity(-3);//setQuantity function called
    p.setColor("golden");//setColor function called
    //print statement form class
    p.printStatement();//printstatement funciton called


    //creation of object from class Basilisk
    Basilisk b;//object of basilisk class created
    //sets name
    b.setName(nameArr[2]);//set name function called
    //prints statement from class
    b.printStatement();//print statement function called

    //extra credit - 3 points
} 
