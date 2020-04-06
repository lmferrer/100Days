//
//  main.cpp
//  Count Odd Integers
//
//  Created by LucasManuel on 4/5/20.
//  Copyright © 2020 LucasManuel. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    int total = 0;
    cout << "This program reads in a positive integer N and then calculates and displays the sum of the first N odd integers.";
        // prompts the user for a non-negative number (>= 0)
        // reads in the number and check
        // keeps re-prompting user if the input is invalid (negative)
        // returns the non-negative input
        cout << "Please enter a non-negative number!\n";
        cin >> n;
        if (!cin || (n < 0)) //the number is negative
        {
        cout << "Please enter a non-negative number!\n";
        return 0;
        }
        else //the number is non-negative
        {
        cout << "The number you entered is " << n << endl;
    }
    for (int i = 0; i < n; i++) {
        if (n==1) {
             total += 1;
        } else {
            total += (i * 2) + 1;
        }
    }
    cout << "The total is " << total << endl;
    return 0;
}

