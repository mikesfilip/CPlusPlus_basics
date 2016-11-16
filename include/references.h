#ifndef REFERENCES_H_INCLUDED
#define REFERENCES_H_INCLUDED

#include "stdio.h"

void references()
{
    int arr[3] = {12,4,1};

    int var = 10;
    int *ref;

//    cout << "Insert input value: ";
//    cin >> var;

    try
    {
        cout << "Prvni promena je " << *arr << endl;
        cout << "Druha promena je " << *(arr+1) << endl;
        cout << "Treti promena je " << *(arr+2) << endl;
        cout << "Ctvrta promena je " << *(arr+3) << endl;

        printf("Hello world");

        ref = &var;
        cout << endl << "Dereferencovana promena zvysena o jednicku: " << (*ref)++ << endl;

        if (var == 100) {
            throw 200;
        }
    }
    catch (int x) {
        cout<<"Wrong value - Error "<<x;
    }
}

#endif // REFERENCES_H_INCLUDED
