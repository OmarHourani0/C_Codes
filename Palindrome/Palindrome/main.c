//
//  main.c
//  Palindrome
//
//  Created by Omar on 03/06/2022.
//

#include <stdio.h>
#include <stdlib.h>

int checkPalindrome(int num)
{
   int reverse = 0;
   int remainder;

   if(num != 0)
   {
      remainder = num % 10;
      reverse = reverse * 10 + remainder;

      checkPalindrome(num/10);
   }
}

int main()
{
    
  int num, n = 0;
  int remainder;
  int original;

  printf("Enter an 5 digit integer: ");
  scanf("%d", &num);
  original = num;
  int reverse = checkPalindrome(num);

  // the integer is a palindrome if the original and reversed are the same
  if (n > 99999)
  {
    printf("\nThe integer you have entered is more than 5 digits\n");
  }

  else
  {

    if (original == reverse)
    {
        printf("\n%d is a palindrome.\n\n", original);
    }

    else
    {
        printf("\n%d is not a palindrome.\n\n", original);
    }

  }

  return 0;
}

