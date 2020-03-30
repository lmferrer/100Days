//
//  main.cpp
//  MetersToInches
//
//  Created by Javier D. Ferrer on 3/28/20.
//  Copyright © 2020 Lucas Ferrer. All rights reserved.
//

#include <iostream>
using namespace std;

int main () {
    double meters, feet;
    cout << "This is a program that convers a distance in meters to the corresponding English distance in feet and inches." << endl;
    cout << "Enter a distance in meters: " ;
    cin >> meters ;
    cout << " " << endl;
    feet = meters * 3.281;
    cout << meters << " meters is " << feet << " feet" << endl;
    return 0;
}
