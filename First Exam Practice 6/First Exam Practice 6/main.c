//
//  main.c
//  First Exam Practice 6
//
//  Created by Omar on 09/04/2022.
//

#include <stdio.h>
#include <stdlib.h>
#define size 8



void inarr(int arr[], int sz)
{
    for(int i = 0; i < sz; ++i)
    {
        arr[i] = rand() % ((40 - 0 + 1) + 0);
    }
}

void outarr(int arr[], int sz)
{
    for(int i = 0; i < sz; ++i)
    {
        printf(" %d\n", arr[i]);
    }
}

void half_double(int arr[], int sz)
{
    
    int index;
    
    for(int i = 0; i < sz; ++i)
    {
        index = arr[i];

        for(int i = 0; i < sz; ++i)
        {
            if(index == (arr[i] / 2))
            {
                printf("\nHalf found = %d", (arr[i] / 2));
            }
            if(index == arr[i] * 2)
            {
                printf("\nDouble found = %d", (arr[i] * 2));
            }
        }
        
    }
}



int main()
{
    int arr[size];
    
    inarr(arr, size);
    outarr(arr, size);
    half_double(arr, size);
    
    return 0;
}
