//
//  Controller.cpp
//  SampleProject
//
//  Created by Johnsen, Matthew on 1/25/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

Controller :: Controller()
{
    
}

void Controller :: start()
{
    string name = "Matthew";
    for (int index = 13; index < 32; index ++)
    {
        cout << "This loop has executed " << index  << " times" << endl;
    }
    cout << "The address of the my name is " << &name << endl;
}

void Controller :: createArray()
{
    double balance[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 11.0};
    int ages[5] = {12, 15, 76, 16, 17};
    string names[3] = {"Sally", "Tom", "Bill"};
    
    for (int index = 0; index < 10; index++)
    {
        cout << "The account balance is " << balance[index] * balance[index] << endl;
    }
    
    for (int index = 0; index < 5; index ++)
    {
        cout << "I know people that are the age of " << ages[index];
    }
    
    for (int index = 0; index < 3; index ++)
    {
        cout << "One of my friend's name is " << names[index];
    }
}
