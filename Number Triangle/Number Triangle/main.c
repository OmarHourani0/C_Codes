//
//  main.c
//  Number Triangle
//
//  Created by Omar on 03/06/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void pr(int ar[], int sz)
{
    for(int i = 0; i < sz; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
    if(sz == 0)
    {
        return;
    }
    pr(ar, (sz - 1));
}


int main()
{
    int size = 10;
    int ar[size];
    srand(time(0));
    for(int i = 0; i < size; ++i)
    {
        ar[i] = rand() % ((10 - (10) + 1) - 10);
    }
    
    pr(ar, size);
    
    return 0;
}
