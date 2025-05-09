#include <stdio.h>

void printnum(int begin){
  printf("%d",begin++);
  if(begin<9) {
    printnum(begin+1);
  }
  printf(" %d",begin--);
}
int main() {
    printnum(0);
    printf("\n\n\n");
    return 0;
}
