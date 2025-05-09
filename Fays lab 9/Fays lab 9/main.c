//
//  main.c
//  Fays lab 9
//
//  Created by Omar on 16/05/2022.
//

#include <stdio.h>
#include <stdlib.h>


float exam(int i)
{
    float sum = 0;

    if(i <= 0)
    {
        return i;
    }
    printf("%d", i);
    return (((i) / i+1) + exam(i - 1));
}



int main()
{
    int n;
    float sum;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("\nThe sum of series is: %.2f\n\n\n", exam(n));
    
    return 0;
}

/*
float sumOfSeries(int i, int n, float s)
{
    // Base case
    if (i > n)
        return s;
  
    // Recursive case
    else
    {
  
        // If we are currently looking
        // at the even number
        //if (i % 2 == 0)
            s = (n / (n + 1));
  
        // If we are currently looking
        // at the odd number
        //else
          //  s+= (float)1 / i;
        return sumOfSeries(i + 1, n, s);
    }
}
 
// Driver code
int main()
{
      
    // cout<<sumOfSeries(1,3,0);
    float sum = sumOfSeries(1, 3, 0);
    printf("%f", sum);
    return 0;
}
*/
