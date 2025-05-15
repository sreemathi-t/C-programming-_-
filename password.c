#include <stdio.h>
#include<string.h>

int main()
{
    char username[20] = "sreemathi";
    int password = 9510;
    char arr[20];
    int x;

    scanf("%s",arr);
    scanf("%d", &x);
    if((strcmp(username,arr)==0) && (password==x))
        printf("login sucessfull");
    else printf("failed");

    return 0;
}