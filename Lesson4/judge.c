#include <stdio.h>

//#define PRINT(i) printf("The num" #num "\n",i)

int main(void)
{
    int num = 0;

    printf("demo judges number parity: \n");

    while (1)
    {
        scanf("%d", &num);

        printf("num = %d\n", num);
        //if(0 == num % 2)
        if(num % 2 == 0)
            printf("The num %d is even.\n", num);
        else
            printf("The num %d is odd\n", num);
     }
        return 0;

