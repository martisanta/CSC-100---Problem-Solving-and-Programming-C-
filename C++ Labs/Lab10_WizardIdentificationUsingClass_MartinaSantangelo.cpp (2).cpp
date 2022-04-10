/*========================================================== 

Title:       Lab 10 - Wizard Identification using Classes 
Course:      CSC 1100 
Author:      <Martina Santangelo> 
Date:        < 3/29 /22> 
Description: This program will create a class that stores age,first name, lastname and Identification
privately inside, but passes them into set and get functions to return them into the main function
 ========================================================== */ 
#include <iostream> 
using namespace std; 

//Create your class Wizard here. 
 class Wizard{//class initialized
    private://set to private 
    int age;// defining age firstname,lastname, and ID variables
    string firstname;
    string lastname;
    int wizardID;
    public://setting this to public(so it can be accessed by main)
    void set_wizardAge(int a){//setting values to variables initialized in private part
        age = a;
    }
    void set_wizardFirstName(string n){//passing another string and setting it = to firstname
        firstname = n;
    }
    void set_wizardLastName(string l){
        lastname = l;
    }
    void set_wizard_ID(int d){
        wizardID = d;
    }
    int get_wizardAge(){//get functions return the variables we set previously 
        return age;
    }
    string get_wizardFirstName(){
        return firstname;
    }
    string get_wizardLastName(){
        return lastname;
    }
    int get_wizard_ID(){
        return wizardID;
    }
    
 };

int main() { 
//DO NOT MODIFY THE MAIN()!!!! 
    int wizardAge, wizard_ID; 
    string wizardFirstName, wizardLastName; 

    cin >> wizardAge >> wizardFirstName >> wizardLastName >> wizard_ID; 

    Wizard wiz; 
    wiz.set_wizardAge(wizardAge); 
    wiz.set_wizard_ID(wizard_ID); 
    wiz.set_wizardFirstName(wizardFirstName); 
    wiz.set_wizardLastName(wizardLastName); 

    cout << wiz.get_wizardAge() << "\n"; 
    cout << wiz.get_wizardLastName() << ", " << wiz.get_wizardFirstName() << "\n"; 
    cout << wiz.get_wizard_ID(); 

    return 0; 
} 
