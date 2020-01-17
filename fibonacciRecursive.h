//
// Created by Ganesh Kudleppanavar on 1/15/20.
//

#ifndef UNTITLED_FIBONACCIRECURSIVE_H
#define UNTITLED_FIBONACCIRECURSIVE_H

// @breif:  Funtion  to return nth fibonacci number using recursive approach.
// @param: [input] ->n nth Fibonacci number requested.
//         [out]   ->currNum Value of nth Fibonacci number.
//                    if input is invalid will return -1.

unsigned long long int fibonacciRecursive(int n)
{
    if(n<0)
    {
        return -1;
    }
    if(n <= 1)
    {
        return n;
    }
    return fibonacciRecursive(n-1) + fibonacciRecursive(n-2);
}

#endif //UNTITLED_FIBONACCIRECURSIVE_H
