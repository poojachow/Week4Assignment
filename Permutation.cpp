//
//  main.cpp
//  Week4Assignment
//
//  Created by Pooja Chowdhary on 8/8/17.
//  Copyright © 2017 Pooja Chowdhary. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

void _swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void _permute(vector<vector<int>> &answer, vector<int> &A, int index){
    if(index >= A.size()) {
        answer.push_back(A);
    }
    for(int i = index; i < A.size(); i++) {
        _swap(A[i], A[index]);
        _permute(answer, A, index+1);
        _swap(A[i], A[index]);
    }
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    vector<vector<int>> answer;
    _permute(answer, A, 0);
    return answer;
}
