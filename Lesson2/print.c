#include <stdio.h>

int global = 200;
extern _start;

int main(void)
{
    int local = 100;
    printf("Hello, World. \n");

    printf("_start is%p\n",&_start);

    printf("local = %d \n", local);
    printf("local = %x \n", local);
    
    printf("global = 0x%d\n", global);
    printf("global = 0x%x\n", global);
    
    printf("&global = %p\n",&global);
    printf("&local = %p\n",&local);
    
    printf("main = %p\n",main);
    return 0;
}
