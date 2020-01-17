//
// Created by Ganesh Kudleppanavar on 1/16/20.
//

#ifndef UNTITLED_FIBONACCIMEMORIZE_H
#define UNTITLED_FIBONACCIMEMORIZE_H

#include<stdio.h>

// @brief:  Function to return nth fibonacci number using memorization approach
// @param: [input] ->n nth Fibonacci number requested.
//         [out]   -> Fib[n]
unsigned long long int fibonacciMemorize(int n, unsigned long long int fib[])
{
    // Check if fib(n) is already computed return the value.
    if(fib[n]!=-1) {
        return fib[n];
    }
    else {
        fib[0] = 0;
        fib[1] = 1;

        for (int i = 2; i <= n; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
    }
    return fib[n];
}
#endif //UNTITLED_FIBONACCIMEMORIZE_H
