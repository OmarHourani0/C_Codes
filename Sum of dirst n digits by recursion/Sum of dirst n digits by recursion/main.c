//
//  main.c
//  Sum of dirst n digits by recursion
//
//  Created by Omar on 03/06/2022.
//

#include <stdio.h>


int sum(int arr[], int i)
{
    while(1)
    {
        printf("%d\n", arr[i]);
        sum(arr, i + 1);
    }
}

int main()
{
    /*
    int n, summ = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    summ = sum(n);
    printf("The sum is %d\n", summ);
    
    summ = (n * (n + 1))/2;
    printf("The sum is %d\n\n\n", summ);
     */
    int arr[100000];
    int i = 0;
    sum(arr, i);
    
    return 0;
}
