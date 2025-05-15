#include <stdio.h>

int main() 
{
    int num;
    scanf("%d", &num);

    switch(num) {
        case 1:
            printf("january");
            break;
        case 2:
            printf("febrary");
            break;
        case 3:
            printf("march");
            break;
        case 4:
            printf("april");
            break;
        case 5:
            printf("may");
            break;
        case 6:
            printf("june");
            break;
        case 7:
            printf("july");
            break;
        case 8:
            printf("augest");
            break;
        case 9:
            printf("septemper");
            break;
        case 10:
            printf("october");
            break;
        case 11:
            printf("november");
            break;
        case 12:
            printf("december");
            break;
        default:
            printf("Invalid input. Enter 1 to 12");
    }

    return 0;
}
