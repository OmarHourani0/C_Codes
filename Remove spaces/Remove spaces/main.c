//
//  main.c
//  Remove spaces
//
//  Created by Omar on 04/06/2022.
//

#include <stdio.h>


void removeSpaces(char *str)
{
  int i=0, j=0;
    
  while (*(str+i) != '\0')
  {
    if (*(str+i) == ' ')
    {
      j=i;
      while (*(str+j) != '\0')
      {
        *(str+j) = *(str+j+1);
        ++j;
      }
    }
    if (*(str+i) != ' ')
      ++i;
  }
}


int main()
{
    char *string = "Omar Hafeth Hourani";
    
    removeSpaces(string);
    
    printf("%s", string);
    return 0;
}
