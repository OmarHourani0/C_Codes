//
//  main.c
//  Sorting negative numbers
//
//  Created by Omar on 02/06/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void bubbleSort(int ar[], int sz)
{
    int i, j, t;
    for(i = 0; i < sz; i++)
    {
        for(j = sz - 1; j > i; j--)
        {
            if (ar[j] < ar[j - 1])
            {
                t = ar[j];
                ar[j] = ar[j - 1];
                ar[j - 1] = t;
            }
        }
    }
}


int main()
{
    int size = 5;
    int ar[size];
    
    srand(time(0));
    
    for(int i = 0; i < size; i++)
    {
        ar[i] = (rand() % (10 - (-10) + 1) + (-10));
    }
    
    for(int j = 0; j < size; j++)
    {
        printf("%d\t", ar[j]);
    }
    
    bubbleSort(ar, size);
    printf("\n\n");
    
    for(int j = 0; j < size; j++)
    {
        printf("%d\t", ar[j]);
    }

    
    return 0;
}
