#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y); 

    while(x <= y) {
        if(x % 4 == 0)
            printf("%d ", x); 
        x++; 
    }

    return 0;
}