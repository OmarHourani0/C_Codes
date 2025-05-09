//
//  main.c
//  Final Practice
//
//  Created by Omar on 17/06/2022.
//

#include <stdio.h>


void mystery(int n)
{
    if (n <= 0)
    {
        printf("boo");
        return;
    }
    
    for (int i = 4; i >= n; i--)
    {
        printf("B ");
    }
    printf("\n1");
    printf("\n");

    mystery(n - 1);
    printf("\n2");
    for (int i = 0; i < n; i++)
    {
        printf("A ");
    }
        printf("\n");
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    mystery(n);
    return 0;
}
