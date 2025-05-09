#include <stdio.h>
#include <stdlib.h>

void printfirst10(int n) {
  if (n==11)
    return;
  else {
    printf("%d ",n);
    printfirst10(n+1);
  }
}

int sumofrange(int n) {
  if (n==1)
    return n;
  else
    return n + sumofrange(n-1);
}

int fibonacci(int n) {
  if (n==0) return 0;
  else if (n==1) return 1;
  else return fibonacci(n-1) + fibonacci(n-2);
}

void printarray(int a[], int s) {
  static int i=0;
  if (i >= s) return;
  printf("%d ", a[i]);
  i++;
  printarray(a,s);
}

int countdigits(int n) {
  if (n<10) return 1;
  else return 1 + countdigits(n/10);
}

int gcd(int a, int b) {
  if (b != 0) return gcd(b, a%b);
  else return a;
}

int getmax(int a[], int n) {
  static int max=0;
  if (n==0) return 0;
  else if (a[n-1] > max) {
    max = a[n-1];
  }
  getmax(a,n-1);
  return max;
}

void reverse(char *str, int i, int j) {
  if (i>=j) return;
  else {
    char temp;
    temp = *(str+i);
    *(str+i) = *(str+j);
    *(str+j) = temp;
  }
}

int decimal_binary(int n)
{
  if (n==0)
    return 0;
  else
    return ((n%2)+10*decimal_binary(n/2));
}

int prime(int n) {
  static int i = 2;
  if (n==1 || n==0) return 0;
  else if (i < n/2) {
    if (n%i==0) return 0;
    else {
      i++;
      prime(n);
    }
  }
  return 1;
}

int lcm(int a, int b) {
  static int temp = 1;
  if(temp%a == 0 && temp%b == 0)
    return temp;
  else {
    temp++;
    lcm(a,b);
    return temp;
  }
}

void printoddeven(int start, int n) {
  if (start > n) return;
  else {
    printf("%d ", start);
    printoddeven(start+2,n);
  }
}

int palindrome(char word[], int start, int end) {
  if (start == end) return 0;
  else {
    if (word[start] != word[end]) return 0;
    else palindrome(word,start+1,end-1);
  }
  return 1;
}

int power(int x, int y) {
  int res = 1;
  if (y==0) return res;
  else return x*power(x,y-1);
}

void copyString(char str1[], char str2[]) {
  static int index=0;
  if (str1[index]=='\0') return;
  else str1[index] = str2[index];
}

void concat(char str1[], char str2[], int len) {
  static int j = 0;
  if (str2[j] == '\0') return;
  else {
    str1[len] = str2[j];
    j++;
    concat(str1,str2,len+1);
  }
}

int main(void) {
  printfirst10(1);
  printf("\nSum of first 10: %d",sumofrange(10));
  printf("\nFibonacci of 10: %d\n", fibonacci(10));
  int a[] = {1,2,3,4,5};
  printarray(a,5);
  printf("\nCount of digits in 2003 is: %d", countdigits(2003));
  printf("\nGCD of 10 and 50: %d", gcd(10,50));
  int b[] = {99,100,80,99,98};
  printf("\nMax in the array: %d", getmax(b,5));
  char name[] = "kayak";
  reverse(name,0,4);
  printf("\nReversed: %s", name);
  printf("\nDecimal(234) = Binary(%d)\n",decimal_binary(243));
  int check = prime(10);
  if (check) printf("is prime\n");
  else printf("not prime\n");
  printf("lcm of 8 and 6: %d\n",lcm(8,6));
  printf("odd numbers: ");
  printoddeven(1,10);
  int flag = palindrome(name,0,4);
  if (flag) printf("\npalindrome\n");
  else printf("\nnot palindrome\n");
  printf("2^5: %d",power(2,5));
  char word2[] = "beach";
  concat(name,word2,5);
  printf("\nNew string: %s",name);
  return 0;
}

