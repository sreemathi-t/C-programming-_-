#include <stdio.h>
int main() {
    int a = 5,b = 6, temp;
     printf("swap: a = %d, b = %d\n", a, b);
     temp = a;
  a = b;
  b = temp;

  printf(" swap: a = %d, b = %d\n", a, b);
}