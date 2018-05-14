//
//  Cereal.cpp
//  Favorites

#include "stdafx.h"
#include "Cereal.h"
#include "favList.h"
#include <iostream>
#include <string>

using namespace std;

int count;

Cereal::Cereal() //Default Constructor
{

    name = "";
    company = "";
    type = "";
    flavor = "";
    rating = 0;
    nCalories = 0;
    
    newName = "";
}

int Cereal::getCereal()
{
    char ans = 'y';
    do
    {
        cout << "Enter the Name of the Cereal" << endl;
        getline (cin, newName);
    
        if(newName.compare(name) != 0)
        {
        cout << "What Company Produces it?" << endl;
        getline (cin, company);
    
        cout << "What type of Cereal is it?" << endl;
        getline (cin, type);
    
        cout << "What flavor is it?" << endl;
        getline (cin, flavor);
    
        cout << "How would you rate this cereal?" << endl;
        cin >> rating;
    
        cout << "How many Calories does it have per serving?" << endl;
        cin >> nCalories;
        }
        else
        {
            cout << "This Cereal has already been recorded!" << endl;
        }
        
        cout << "Do you have more to record?" << endl;
        cin >> ans;
    }
    while (ans == 'y' || ans == 'Y');
    
    return 0;
}

void Cereal::addCereal()
{
    getCereal();
}

ostream & operator << (ostream &os, const Cereal &cer)
{
    os << "Your Cereal" << endl;
    os << "Name: " << cer.name << endl;
    os << "Company: " << cer.company << endl;
    os << "Type: " << cer.type << endl;
    os << "Flavor: " << cer.flavor << endl;
    os << "Rating: " << cer.rating << endl;
    os << "Calories per Serving: " << cer.nCalories << endl;
    
    return os;
}

Cereal::~Cereal()
{
}
