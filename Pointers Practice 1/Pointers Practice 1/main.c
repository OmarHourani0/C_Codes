//
//  main.c
//  Pointers Practice 1
//
//  Created by Omar on 25/05/2022.
//

#include <stdio.h>


void val(int *ptr)
{
    ptr++;
    *ptr = 2;
}

int main()
{
   /*
    int b[6] = {1,2,3,4,5};
    int num = 69;
    int ptr;
    int *p;
    
    p = &num;
    
    printf("%p\n", &num);
    printf("%p\n", p);
    printf("%d\n", *p);

    *p = 20;
    printf("%d\n", *p);
    printf("%d\n", b[0]);
    printf("%d\n", *(b+1));
    */
    
    int tab[5] = {1, 5, 47, 64, 43558};
    int *ptr = tab;
    
    val(tab);
    
    printf("%d\n%d", tab[0], tab[1]);
    
    return 0;
}
