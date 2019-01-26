#include <stdio.h>

int main(void)
{
    int i = 1;
    int j = 1;
    for(i = 1; i < 10; i++)
    {
        //for(j = 1; j <= i; j++)
        //    printf("%d*%d=%d\t",j,i,i*j);
       
        for (j = 1; j < 10;j++)
            {
                if(j <= i)
                    printf("%d*%d=%d\t",j,i,i*j);
            }
        printf("\n");
    }

    return 0;
}
