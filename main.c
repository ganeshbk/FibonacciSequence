//
// Created by Ganesh Kudleppanavar on 1/15/20.
//

#include <stdio.h>
#include "fibonacciRecursive.h"
#include "fibonacciIterative.h"
#include "fibonacciMemorize.h"
#include "testFibonacciImplementation.h"

int main() {
    char unitTestEnable = 'n';
    printf("Do you want to peform unit test (y|n): ");
    scanf("%s",&unitTestEnable);
    if(unitTestEnable == 'y') {
        // This is to perform unit test on the fibonacci implementation
        bool test = testFibonacciImplementataion();
        if (test == true) {
            printf("ALL UNIT TEST PASSED\n");
        }
    }
    int n = 0;

    printf("\n which fibonacci number you want (n) ? :");

    scanf("%d", &n);
    unsigned long long int fib_iterative = fibonacciIterative(n);
    printf("\n Fib using iterative method of n : %d is %lld", n, fib_iterative);

    unsigned long int fib_recursive = fibonacciRecursive(n);
    printf("\n Fib using recursive method of n %d is %ld", n, fib_recursive);

    // If the use case demands multiple call to the fibonacci number this memorization method should be used at the
    // expense of extra memory which would be limited by the highest n value.
    unsigned long long int fibArray[101];
    for(int i=0; i<=100; i++)
    {
        fibArray[i] = -1;
    }
    unsigned long long int fib_memorize = fibonacciMemorize(n, fibArray);
    printf("\n Fib using memorization method is  of n  %d is %lld", n, fib_memorize);
    return 0;

}