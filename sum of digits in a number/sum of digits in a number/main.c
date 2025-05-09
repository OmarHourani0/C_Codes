//
//  main.c
//  sum of digits in a number
//
//  Created by Omar on 11/06/2022.
//

#include <stdio.h>

int main()
{

    float sum = 0;
    int count = 4;
    int STUDENTS=3;
    int grade;
    for(int students =1 ; students <= STUDENTS ; students++)
    {
        printf("For student %d\n", students);
        
        for(int grades = 1; grades <= count; grades++)
        {

            printf("\nEnter a grade: ");
            scanf("%d", &grade);
            sum = sum + grade;
        }
        //calculate average
        printf("average of current student is: %.2f\n", sum/count);
        //there is a glitch or a bug in this code, something is missing!!
      }

    return 0;
}
