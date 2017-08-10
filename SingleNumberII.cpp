//
//  SingleNumberII.cpp
//  Week4Assignment
//
//  Created by Pooja Chowdhary on 8/9/17.
//  Copyright © 2017 Pooja Chowdhary. All rights reserved.
//
#include <iostream>
#include <vector>
using namespace std;

int Solution::singleNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int m = 0, n = 0, x = 0;
    for (int i = 0; i < A.size(); i++) {
        m = m | (n & A[i]);
        n = n ^ A[i];
        x = ~(n & m);
        m = m & x;
        n = n & x;
    }
    return n;
}

