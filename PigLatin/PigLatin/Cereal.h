//  Cereal.h
//  Favorites

#pragma once

#include <string>
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Cereal
{
private:
    
    string name;
    string company;
    string type;
    string flavor;
    
    int rating;
    int nCalories;
    
    string newName;
    
public:
    Cereal(); //Default Constructor
    int getCereal();
    void addCereal();
    
    ~Cereal();
    
    friend ostream & operator << (ostream &os, const Cereal &cer);
};
