//
//
//

#include<stdio.h>
int main()
{
    int x = 2;
    int y;
    while (x <= 10)
    {
        y = x*x;
        x += 2;
        if (x == 6)
            continue;
        if (y >80)
            break;
        printf("%d %d \n", x, y);
    }
    return 0;
}
