//
//  main.c
//  First Exam practic 2
//
//  Created by Omar on 08/04/2022.
//

#include <stdio.h>

int main()
{
    int k;
    int i = 5;
    
    while(i <=100)
    {
        if((i % 4) == 0)
            k = 5;
        else if((i % 4) == 1)
            k = 1;
        else
            k = 3;
        i++;
    }
    
    printf("%d\n\n\n", k);
    return 0;
}
