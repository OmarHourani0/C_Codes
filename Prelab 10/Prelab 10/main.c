// Omar Hourani
// 20210095

// Lecturer: Khaled Mansour

#include <stdio.h>


int cubebyvalue(int n)
{
    int i;
    i = (n*n*n);
    return i;
}


void cubebyref(int *ptr)
{
    *ptr = (*ptr * *ptr * *ptr);
    printf("\nThe cube by refrence is: %d", *ptr);//
}


int main()
{
    int num, cubeV;
    int *ptr;
    
    ptr = &num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    printf("\nThe number is: %d\n", num);
    
    cubeV = cubebyvalue(num);
    printf("\nThe cube by value is: %d", cubeV);
    printf("\nValue of n in main is: %d\n", num);
    
    cubebyref(ptr);
    printf("\nValue of n in main is: %d\n\n\n", num);
    
    
    
    return 0;
}
