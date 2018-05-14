//  main.cpp
//  Favorites

#include "stdafx.h"
#include "favList.h"
#include "Cereal.h"
#include <iostream>

using namespace std;

void dataIntro();

int main()
{
    dataIntro();
    
    List myList;
    myList.addCereal();
    
    return 0;
}

void dataIntro()
{
    cout << "My favorite food of all time is Cereal!" << endl;
    cout << "The data that is being tracked is listed below: " << endl;
    cout << "1) The Name of the Cereal" << endl;
    cout << "2) The Company that produces it (ie Kelloggs, General Mills, Post, etc)" << endl;
    cout << "3) The Type of cereal it is (ie Corn, Rice, Wheat, etc)" << endl;
    cout << "4) The Flavor of the cereal (ie Original, W/ Marshmellows, Chocolate, etc)" << endl;
    cout << "5) My Personal Rating (A Number)" << endl;
    cout << "6) The Amount of Calories per Serving (A Number)" << endl;
    cout << endl;
}

