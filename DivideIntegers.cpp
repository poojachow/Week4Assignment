//
//  DivideIntegers.cpp
//  Week4Assignment
//
//  Created by Pooja Chowdhary on 8/9/17.
//  Copyright © 2017 Pooja Chowdhary. All rights reserved.
//
#include <iostream>
#include <vector>
using namespace std;

int Solution::divide(int dividend, int divisor) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    if(divisor == 1) {
        return dividend;
    }
    if(divisor == 0) {
        return INT_MAX;
    }
    if(divisor == -1) {
        if (dividend == INT_MIN) {
            return INT_MAX;
        }
        return dividend < 0 ? abs(dividend) : -dividend;
    }
    int count = 0;
    long sum = 0;
    long ldividend = dividend, ldivisor = divisor;
    bool flagNegative = false;
    if ((ldividend < 0 || ldivisor < 0) && !(ldividend < 0 && ldivisor < 0)) {
        flagNegative = true;
    }
    ldividend = abs(ldividend);
    ldivisor = abs(ldivisor);
    
    while(sum < ldividend) {
        if((sum + sum <= ldividend) && sum != 0) {
            sum = sum + sum;
            count = count + count;
        }
        else{
            sum = sum + ldivisor;
            if(sum <= ldividend) {
                count++;
            }
        }
    }
    return flagNegative == true ? -count : count;
}
