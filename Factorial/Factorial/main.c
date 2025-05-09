//
//  main.c
//  Factorial
//
//  Created by Omar on 04/06/2022.
//

#include <stdio.h>


int factorial(int n)
{
    static int fact = 1;
    while(n > 0)
    {
        fact = fact * n;
        return factorial(n - 1);
    }
    return fact;
}


int main()
{
    int n, fact;
    
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    fact = factorial(n);
    printf("The factorial of %d is %d\n\n\n", n, fact);
    
    return 0;
}
