//
//  main.cpp
//  Combinations
//
//  Created by LucasManuel on 4/13/20.
//  Copyright © 2020 Lucas Manuel. All rights reserved.
//

/*
 * File: Combinations.cpp
 * ----------------------
 * This program computes the mathematical function C(n, k) from
 * its mathematical definition in terms of factorials.
 */

#include <iostream>
using namespace std;

/* Function prototypes */

int combinations (int n, int k);
int fact (int n);

/* Main program */

int main(){
    int n, k;
    cout << "Enter the number of objects (n): ";
    cin >> n;
    cout << "Enter the number to be chosen (k): ";
    cin >> k;
    cout << "C(n, k) = "<< combinations(n, k) << endl;
    return 0;
}

/*
 * Function: combinations (n,k)
 * Usage : int nWays = combinations(n, k);
 * ----------------------------------------
 * Returns the mathematical combinations function C(n, k), which is
 * the number of ways one cna choose k elements from a set of size n.
 */

int combinations (int n, int k){
    return fact(n) / (fact(k) * fact(n-k));
}
/*
 * Function: fact(n)
 * Usage: int results = fact(n);
 * -----------------------------
 * Returns the factorial of n, which is the product of all the integers between 1 and
 * n, inclusive.
 */

int fact(int n){
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
