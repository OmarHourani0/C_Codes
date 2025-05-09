// Omar Hourani
// 20210095

// Lecturer: Khaled Mansour

#include <stdio.h>
#define sz 1000


int main()
{
    int num, i, j;
    //int ar[100];
    
    while(num != -1)
    {
        
        printf("Please enter a positive integer to find its divisors or -1 to exit: ");
        scanf("%d", &num);
        if(num == -1)
        {
            break;
        }
        
        printf("The divisors are: \n");
        for(i = 0; i < sz; ++i)
        {
            if(num % i == 0)
            {
                j = i;
                printf("%d ", j);
            }
        }
        printf("\n\n");
        
        
    }
    
    
    
    
    return 0;
}
