//
//  main.cpp
//  CelciusToFahrenheit
//
//  Created by Javier D. Ferrer on 3/28/20.
//  Copyright © 2020 Lucas Ferrer. All rights reserved.
//

#include <iostream>
using namespace std;

int main () {
    double celcius;
    cout << "This program converts temperature in degrees celcius to degrees fahrenheit." << endl;
    cout << "Enter temperature in degrees celcius: ";
    cin >> celcius;
    double fahrenheit = (celcius * 9/5) + 32;
    cout << celcius;
    cout << "degrees celcius equals ";
    cout << fahrenheit;
    cout << " degrees fahrenheit." << endl;
    return 0;
}


