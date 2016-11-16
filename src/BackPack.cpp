#include <iostream>
#include <string>
#include "BackPack.h"
using namespace std;

BackPack::BackPack()
{
    cout << "Backpack created" << endl;
}

BackPack::BackPack(char a)
{
    cout << "Backpack created with letter" << endl;
    letter = a;
}

BackPack::~BackPack()
{
    cout << "Backpack deleted" << endl;
}

BackPack::BackPack(const BackPack& other)
{
    //copy ctor
}
