#include <stdio.h>

int y = 30;
void modifyValue(int *a)
{
    printf("Address of pointer a = %d\n", &a); //6422256
    *a = 15;
}   

 inttestFunction()
{
    int x = 10;
    printf("Call by reference:\n");
    printf("Y is Global variable y = %d\n");
    printf("testFunction: Before modify function x = %d\n", x);//10

    modifyValue(&x);
    printf("Address of x %d\n", x);                            //6422284
    printf("testFunction: After modify function x = %d\n", x);//15
   
    return 0;
}       