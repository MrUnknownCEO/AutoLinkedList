#include <iostream>
#include <string>
#include "Auto.h"

using namespace std;

int main()
{

    //create our object class
    ListOfAutos autolist;

    string Auto;

    cout<<"Enter 10 different type of automakers"<<endl;

    for(int i = 0; i < 10; i++) {
        cout<<"enter auto name " << "or enter (quit) to quit"<<endl;
        cin>>Auto;
        if(Auto == "quit") {
            break;
        }
        //add the cars to the list
        autolist.AddAuto(Auto);
    }

    //display the list
    cout<<"List of Autos:"<<endl;
    autolist.Display();

    //count autos in the list
    int count = autolist.Countlist();
    cout<<"count list"<<count<<endl;

    return 0;
}
