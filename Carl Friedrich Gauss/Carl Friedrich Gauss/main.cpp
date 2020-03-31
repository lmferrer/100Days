//
//  main.cpp
//  Carl Friedrich Gauss
//
//  Created by Javier D. Ferrer on 3/31/20.
//  Copyright © 2020 Lucas Ferrer. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    cout << "The sum is : " << sum << endl;
    return 0;
}
