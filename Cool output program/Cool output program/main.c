//
//  main.c
//  Cool output program
//
//  Created by Omar on 02/06/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>




char compare()
{
    char randlt = ((rand()%(90-65))+65);
    printf("%c\n", randlt);
    return randlt;
}


int main()
{
    srand(time(0));
    
    char randltr = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[random () % 26];
    char inp[100];
    int i = 0, count = 0;
    
    printf("Enter a string: ");
    gets(inp);
    
    while(inp[i] != '\0')
    {
        ++count;
        ++i;
    }
    
    for(int j = 0; j < count; ++j)
    {
        while(inp[j] != randltr)
        {
            randltr = compare();
            if(inp[j] == randltr)
            {
                printf("%c", randltr);
                
            }
            
        }
    }
    
    return 0;
}
