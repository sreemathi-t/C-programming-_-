#include <stdio.h>
#include<string.h>

int main()
{
    int i;
    for(i = 1; i <= 50;i++){
        if(i % 2 == 0)
            printf("%d\n",i);
        if(i>=50)break;
         }
    
    return 0;
}
