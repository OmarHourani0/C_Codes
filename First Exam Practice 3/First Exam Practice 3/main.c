//
//  main.c
//  First Exam Practice 3
//
//  Created by Omar on 08/04/2022.
//
// num = (rand() % (upper – lower + 1)) + lower


#include <stdio.h>
#include <stdlib.h>

#define size 100


void in(int arr[], int sz)
{
    int i;
    
    //printf("Enter %d numbers: ", sz);
    
    for(i = 0; i < sz; ++i)
    {
        arr[i] = (rand() % (100 - 0 + 1)) + 0;
    }
}


int pair(int arr[], int sz)
{
    int i = 0, count = 0;
    
    while(i < sz)
    {
        if(arr[i] < arr[i +1])
        {
            count++;
            /*pair[k] = arr[i];
            pair[k + 1] = arr[i + 1];
            k++;*/
        }
        i = i +2;
    }
    return count;
}

void output(int arr[], int sz)
{
    for(int i = 0; i < sz; ++i)
    {
        printf("%d\t", arr[i]);
        if((i % 2) == 1)
            printf("\n");
        
        
    }
}


/*void assign_pair(int pair[], int count)
{
    int i = 0;
    
    for(i = 0; i < count; ++i)
    {
        
    }

}*/



int main()
{
    int arr[size];
    int count = 0;
    
    in(arr, size);
    output(arr, size);
    
    count = pair(arr, size);
    
    //printf("\nThere are %d pair(s)\n\n\n", count);
    
    if(count == 0)
    {
        printf("\nThere are no such pairs\n\n\n");
    }
    else if(count == 1)
    {
        printf("\nThere is %d pair\n\n\n", count);
    }
    else
    {
        printf("\nThere are %d pairs\n\n\n", count);
    }
    
    
    return 0;
}
