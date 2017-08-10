//
//  GrayCode.cpp
//  Week4Assignment
//
//  Created by Pooja Chowdhary on 8/9/17.
//  Copyright © 2017 Pooja Chowdhary. All rights reserved.
//

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void _grayCode(vector<int> &answer, int A, int n) {
    if(A<=n) {
        return;
    }
    vector<int> temp;
    int num;
    int raised = pow(2, n);
    for(int i = 0; i < answer.size(); i++) {
        num = raised | answer[i];
        temp.push_back(num);
    }
    for(int i = temp.size()-1; i >=0; i--) {
        answer.push_back(temp[i]);
    }
    n++;
    _grayCode(answer, A, n);
}

vector<int> Solution::grayCode(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    vector<int> answer;
    if(A <= 0) {
        return answer;
    }
    if(A >= 1) {
        answer.push_back(0);
        answer.push_back(1);
    }
    if(A >= 2) {
        answer.push_back(3);
        answer.push_back(2);
    }
    if(A >= 3){
        _grayCode(answer, A, 2);
    }
    return answer;
}
