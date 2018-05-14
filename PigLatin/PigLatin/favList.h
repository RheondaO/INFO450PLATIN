//  favList.h
//  Favorites

#pragma once

#include "stdafx.h"
#include "Cereal.h"

using namespace std;

class List
{
private:
    Cereal iList[3];
    int listSize;
    
public:
    List();
    void addCereal();
    int getCereal();
};
