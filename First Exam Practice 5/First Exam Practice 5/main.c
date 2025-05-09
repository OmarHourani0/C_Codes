//
//  main.c
//  First Exam Practice 5
//
//  Created by Omar on 09/04/2022.
//

#include <stdio.h>
#include <stdlib.h>
#define size 20



void grades(float sami[], float ahmad[], float ali[], int sz)
{
    for(int i = 0; i < sz; ++i)
    {
        sami[i] = rand() % (100 - 0 + 1) - 0;
        ahmad[i] = rand() % (100 - 0 + 1) - 0;
        ali[i] = rand() % (100 - 0 + 1) - 0;
    }
}


void out(float sami[], float ahmad[], float ali[], int sz)
{
    for(int i = 0; i < sz; ++i)
    {
        printf("\nSami-%.2f", sami[i]);
        printf("\nAhmad-%.2f", ahmad[i]);
        printf("\nAli-%.2f\n", ali[i]);
    }
}


int compare(float sami[], float ahmad[], float ali[], int sz)
{
    int count = 0;
    for(int i = 0; i < sz; ++i)
    {
        if((sami[i] > ahmad[i]) && (sami[i] > ali[i]))
        {
            count++;
        }
    }
    return count;
}


int main()
{
    float sami[size];
    float ahmad[size];
    float ali[size];
    int counter = 0;
    
    grades(sami, ahmad, ali, size);
    out(sami, ahmad, ali, size);
    counter = compare(sami, ahmad, ali, size);
    
    printf("\n\nSami scored higher than his brothers on %d tests\n\n\n", counter);
    
    return 0;
}
