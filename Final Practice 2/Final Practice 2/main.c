//
//  main.c
//  Final Practice 2
//
//  Created by Omar on 17/06/2022.
//

#include <stdio.h>


int equal_pairs(int a[], int size)
{
    while(size >= 0)
    {
        if(a[size] == a[size - 1])
        {
            printf("%d", size);
            equal_pairs(a, size - 2);
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a[10] = {1, 1, 2, 2, 0, 0, 3, 3, -1, -1};
    int size = 10;
    int count = 0;
    int res;
    
    res = equal_pairs(a, size);
    printf("nig%d\n\n\n", res);
    return 0;
}
