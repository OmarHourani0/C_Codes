// Omar Hourani
// 20210095

// Lecturer: Khaled Mansour

#include <stdio.h>

int main()
{
float temperature[4][2], morn[4];
  int r, c;             //r for row c for column
  for(r = 0; r < 4; r++){
    for(c = 0; c < 2; c++){
        printf("Enter a value: ");
        scanf("%f", &(temperature[r][c]));
    }
  }
printf(" \n\tMorning    Evening\n");
for(r = 0; r < 4; r++){
    printf("Day %d\t",r+1);
    for(c = 0; c < 2; c++){
       printf("%0.2f\t", temperature[r][c]);
     }
     printf("\n");
  }
     printf("\n");

  for(r = 0; r < 4; r++){
    for(c = 0; c < 2; c++){
        // temperature[r][c]= (temperature[r][c]) * 95+23; this formula for converting from f to c is incorrect below is the correct formula
       temperature[r][c]= (temperature[r][c] * 9/5)+32;
    }
  }
float temp1=temperature[0][0];
float temp2=temperature[0][1];
float temp3=temperature[3][0];
float temp4=temperature[3][1];
temperature[0][0]=temp1;
temperature[0][1]=temp2;
temperature[3][0]=temp3;
temperature[3][1]=temp4;
printf(" \n\tMorning    Evening\n");
for(r = 0; r < 4; r++){
    printf("Day %d\t",r+1);
    for(c = 0; c < 2; c++){
       printf("%0.2f\t", temperature[r][c]);
     }
     printf("\n");
  }
       printf("\n");
printf("Morning temperatures during the weeks working days\n");
  for(r = 0; r < 4; r++)
  {
      morn[r]=temperature[r][0];
      printf("%0.2f\t", morn[r]);
  }
     printf("\n\n\n");


    return 0;
}
