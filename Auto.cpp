#include"Auto.h"
#include<iostream>
#include<string>

using namespace std;

//constructor for Auto class
Auto::Auto(string& make) {
    Make = make;
    NextAuto = NULL; //Initialize NextAuto to null
}

//constructor for ListOfAutos class
ListOfAutos::ListOfAutos() {
    head = NULL; //Initialize head to Null
}

//set function
void Auto::setNextAuto(Auto* nextauto) {
    NextAuto = nextauto;
}

//get function
string Auto::getAutoMake() {
    return Make;
}

Auto* Auto::getNextAuto() {
    return NextAuto;
}

//functions for ListOfAutos class

void ListOfAutos::AddAuto(string& make) {
    Auto* newAuto = new Auto(make);
    newAuto->setNextAuto(head);// we point the newAuto next to head
    head = newAuto; // we set newAuto to head

}

void ListOfAutos::Display() {
    Auto* currentAuto = head;
    while (currentAuto != NULL) {
            cout<< currentAuto->getAutoMake() << endl;
            currentAuto = currentAuto->getNextAuto();
        }
}

int ListOfAutos::Countlist() {
    int counter = 0;
    Auto* currentAuto = head;
    while (currentAuto != NULL) {
        counter++;
        currentAuto = currentAuto->getNextAuto();
    }
    return counter;
}
