#include <stdio.h>

int main()
{
    int x;
    int factorial=1;
    scanf("%d",&x);
    while(x>=1){
        factorial *=x;
        printf("%d\n",factorial);
        x--;
    }
    printf("factorial:%d",factorial);
    return 0;
}