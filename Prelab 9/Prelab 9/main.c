// Omar Hourani
// 20210095

// Lecturer: Khaled Mansour


#include <stdio.h>
#include <stdlib.h>


float exam(int i)
{
    if(i <= 0)
    {
        return i;
    }
    return ((((float)i) / (i+1))) + exam(i -1);
}



int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("\nThe sum of series is: %.2f\n\n\n", exam(n));
    
    return 0;
}
