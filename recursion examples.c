////
#include<stdio.h>
 
int sumOfRange(int);
 
int main() 
{
   int n1;
   int sum;
	printf("\n\n Recursion : calculate the sum of numbers from 1 to n :\n");
	printf("-----------------------------------------------------------\n");    
 
   printf(" Input the last number of the range starting from 1 : ");
   scanf("%d", &n1);
 
   sum = sumOfRange(n1); 
   printf("\n The sum of numbers from 1 to %d : %d\n\n", n1, sum);
 
   return (0);
}
 
int sumOfRange(int n1) 
{
   int res;
   if (n1 == 1) 
   {
      return (1);
   } else 
   {
      res = n1 + sumOfRange(n1 - 1); //calling the function sumOfRange itself
   }
   return (res);
}

////
#include<stdio.h>
 
int sumOfRange(int);
 
int main() 
{
   int n1;
   int sum;
	printf("\n\n Recursion : calculate the sum of numbers from 1 to n :\n");
	printf("-----------------------------------------------------------\n");    
 
   printf(" Input the last number of the range starting from 1 : ");
   scanf("%d", &n1);
 
   sum = sumOfRange(n1); 
   printf("\n The sum of numbers from 1 to %d : %d\n\n", n1, sum);
 
   return (0);
}
 
int sumOfRange(int n1) 
{
   int res;
   if (n1 == 1) 
   {
      return (1);
   } else 
   {
      res = n1 + sumOfRange(n1 - 1); //calling the function sumOfRange itself
   }
   return (res);
}

////
#include <stdio.h>
#define MAX 100

void ArrayElement(int arr1[], int st, int l);
 
int main()
{
    int arr1[MAX];
    int n, i;
	printf("\n\n Recursion : Print the array elements :\n");
	printf("-------------------------------------------\n");
	
	printf(" Input the number of elements to be stored in the array :");
    scanf("%d",&n);
   
    printf(" Input %d elements in the array :\n",n);
    for(i=0;i<n;i++)
        {
	      printf(" element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
     
    printf(" The elements in the array are : ");
    ArrayElement(arr1, 0, n);//call the function ArrayElement
    printf("\n\n"); 
    return 0;
}

void ArrayElement(int arr1[], int st, int l)
{
    if(st >= l)
        return;
         
    //Prints the current array element
    printf("%d  ", arr1[st]);
     
    /* Recursively call ArrayElement to print next element in the array */
    ArrayElement(arr1, st+1, l);//calling the function  ArrayElement itself
}

////
#include<stdio.h>

int noOfDigits(int n1);
int main()
{
  int n1,ctr;
    printf("\n\n count the digits of a given number :\n");
	printf("-----------------------------------------\n");
    printf(" Input  a number : ");
    scanf("%d",&n1);

    ctr = noOfDigits(n1);

    printf(" The number of digits in the number is :  %d \n\n",ctr);
    return 0;
}

int noOfDigits(int n1)
{
    static int ctr=0;

     if(n1!=0)
     {
          ctr++;
         noOfDigits(n1/10);
    }

    return ctr;
}

////
#include <stdio.h>
 
int DigitSum(int num);
 
int main()
{
    int n1, sum;
	printf("\n\n Recursion : Find the sum of digits of a number :\n");
	printf("-----------------------------------------------------\n");     
    printf(" Input any number to find sum of digits: ");
    scanf("%d", &n1);
     
    sum = DigitSum(n1);//call the function for calculation
     
    printf(" The Sum of digits of %d = %d\n\n", n1, sum);
     
    return 0;
}

int DigitSum(int n1)
{
    if(n1 == 0)
        return 0;
         
    return ((n1 % 10) + DigitSum(n1 / 10));//calling the function DigitSum itself
}

////
#include<stdio.h>

int findGCD(int num1,int num2);
int main()
{
  int num1,num2,gcd;
  printf("\n\n Recursion : Find GCD of two numbers :\n");
  printf("------------------------------------------\n");  
  printf(" Input 1st number: ");
  scanf("%d",&num1);
  printf(" Input 2nd number: ");
  scanf("%d",&num2);
  
  gcd = findGCD(num1,num2);
  printf("\n The GCD of %d and %d is: %d\n\n",num1,num2,gcd);
  return 0;
}

int findGCD(int a,int b)
{
     while(a!=b)
     {
          if(a>b)
              return findGCD(a-b,b);
          else
             return findGCD(a,b-a);
     }
     return a;
}


#include<stdio.h>
#define MAX 100

int MaxElem(int []);
int n;

int main()
{
    int arr1[MAX],hstno,i;
	printf("\n\n Recursion : Get the largest element of an array :\n");
	printf("------------------------------------------------------\n");

      printf(" Input the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf(" Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf(" element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }	
    hstno=MaxElem(arr1);//call the function MaxElem to return the largest element
    printf(" Largest element of the array is: %d\n\n",hstno);
    return 0;
}
int MaxElem(int arr1[])
{
    static int i=0,hstno =-9999;
    if(i < n)
    {
         if(hstno<arr1[i])
           hstno=arr1[i];
      i++;
      MaxElem(arr1);//calling the function MaxElem itself to compare with further element
    }
    return hstno;
}

////
#include<stdio.h>
#define MAX 100
char* ReverseOfString(char[]);

int main()
{

    char str1[MAX],*revstr;
	printf("\n\n Recursion : Get reverse of a string :\n");
	printf("------------------------------------------\n");	

    printf(" Input any string: ");
    scanf("%s",str1);

    revstr = ReverseOfString(str1);//call the function ReverseOfString

    printf(" The reversed string is: %s\n\n",revstr);
    return 0;
}
char* ReverseOfString(char str1[])
{
    static int i=0;
    static char revstr[MAX];
    if(*str1)
    {
         ReverseOfString(str1+1);//calling the function ReverseOfString itself
         revstr[i++] = *str1;
    }
    return revstr;
}

////
#include<stdio.h>
int findFactorial(int);

int main()
{
  int n1,f;
	printf("\n\n Recursion : Find the Factorial of a number :\n");
	printf("-------------------------------------------------\n");	  
  printf(" Input  a number : ");
  scanf("%d",&n1);
  f=findFactorial(n1);//call the function findFactorial for factorial
  printf(" The Factorial of %d is : %d\n\n",n1,f);
  return 0;
}

int findFactorial(int n)
{
   if(n==1)
       return 1;
   else
       return(n*findFactorial(n-1));// calling the function findFactorial to itself recursively
 }

////
#include<stdio.h>

long convertBinary(int);

int main()
{
    long biNo;
    int decNo;
	
	printf("\n\n Recursion : Convert decimal number to binary :\n");
	printf("---------------------------------------------------\n");

    printf(" Input any decimal number : ");
    scanf("%d",&decNo);

    biNo = convertBinary(decNo);//call the function convertBinary
    printf(" The Binary value of decimal no. %d is : %ld\n\n",decNo,biNo);
    return 0;
}
long convertBinary(int decNo)
{
    static long biNo,r,fctor = 1;

    if(decNo != 0)
    {
         r = decNo % 2;
         biNo = biNo + r * fctor;
         fctor = fctor * 10;
         convertBinary(decNo / 2);//calling the function convertBinary itself recursively
    }
    return biNo;
}

////
#include

int checkForPrime(int);
int i;

int main()
{

    int n1,primeNo;

	printf("\n\n Recursion : Check a number is prime number or not :\n");
	printf("--------------------------------------------------------\n");
	
    printf(" Input any positive number : ");
    scanf("%d",&n1);
    
    i = n1/2;

    primeNo = checkForPrime(n1);//call the function checkForPrime

   if(primeNo==1)
        printf(" The number %d is a prime number. \n\n",n1);
   else
      printf(" The number %d is not a prime number. \nn",n1);
   return 0;
}

int checkForPrime(int n1)
{
    if(i==1)
    {
        return 1;
    }
    else if(n1 %i==0)
    {
         return 0;
    }     
    else
       {
         i = i -1; 
         checkForPrime(n1);//calling the function checkForPrime itself recursively
      }
}

////

////
