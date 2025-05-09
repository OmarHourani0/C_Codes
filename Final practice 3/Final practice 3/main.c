//
//  main.c
//  Final practice 3
//
//  Created by Omar on 17/06/2022.
//

#include <stdio.h>


void sum_3(int a[], int size)
{
    for(int i = 0; i < size; ++i)
    {
        for(int j = 0; j < size; ++j)
        {
            for(int k = 0; k < size; ++k)
            {
                if((a[i] == a[k] + a[j]) && (i != j) && (j != k))
                {
                    printf(">%d\n\n", a[k]);
                }
            }
        }
    }
}


int main()
{

    int num[] = {1, 2, 3, 4, 5, 9};
    int size = 6;
    
    sum_3(num, size);
    
    return 0;
}
