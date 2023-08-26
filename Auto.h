#ifndef AUTO_H
#define AUTO_H
#include<string>
#include<iostream>
using namespace std;

class Auto{
private:
    //data members
    string Make;
    Auto* NextAuto;

public:
    //Constructor
    //paramter to initialize the make member
    Auto(string& make);

    //mutator(set function)
    void setNextAuto(Auto* next);

    //accessors(get function)
    string getAutoMake();
    Auto* getNextAuto();



};

class ListOfAutos{
private:
    Auto* head;

public:
    //constructor
    ListOfAutos();


    //functions for ListOfAutos class
    void AddAuto(string& make);
    void Display();
    int Countlist();
};

#endif // AUTO_H
