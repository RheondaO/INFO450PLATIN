//favList.cpp
//Favorites

#include "stdafx.h"
#include <iostream>
#include "favList.h"
#include "Cereal.h"

using namespace std;

List::List()
{
    listSize = 0;
}

void List::addCereal()
{
        if (iList[listSize].getCereal() <= 3)
        {
            addCereal();
        }
        else
        {
            cout << "List is Full" << endl;
        }
}

int List::getCereal()
{
    listSize++;
    
    return 0;
}
