//
// Created by Ganesh Kudleppanavar on 1/15/20.
//

#ifndef UNTITLED_FIBONACCIITERATIVE_H
#define UNTITLED_FIBONACCIITERATIVE_H

// @brief:  Function  to return nth fibonacci number using iterative approach
// @param: [input] ->n nth Fibonacci number requested.
//         [out]   ->currNum Value of nth Fibonacci number.
//                    if input is invalid will return -1.
unsigned long long int fibonacciIterative(int n)
{
    if(n<0){
        return -1;
    }
    if(n <= 1)
    {
        return n;
    }
    unsigned long long int prevPrevNum, prevNum = 0, currNum = 1;

    for (int i = 1; i < n ; i++) {
        prevPrevNum = prevNum;
        prevNum = currNum;
        currNum = prevPrevNum + prevNum;
    }
    return currNum;
}

#endif //UNTITLED_FIBONACCIITERATIVE_H
