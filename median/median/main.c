//
//  main.c
//  median
//
//  Created by Omar on 18/04/2022.
//

#include <stdio.h>


int median(int n1, int n2, int n3)
{
    if((n2 >= n3) && (n2 >= n1))
    {
        n1 = n2;
    }
    else if((n3 >= n2) && (n3 >= n1))
    {
        n1 = n3;
    }
    if(n3 >= n2)
    {
        n2 = n3;
    }
    
    return n2;
}


int main()
{
    
    int n1, n2, n3, bro;
    
    printf("Enter a number: ");
    scanf("%d", &n1);
    printf("\nEnter a number: ");
    scanf("%d", &n2);
    printf("\nEnter a number: ");
    scanf("%d", &n3);
    
    bro = median(n1, n2, n3);
    printf("\n\n=%d", bro);
    
    
    
    
    return 0;
}
