#include <stdio.h>
int testPointer2()
{
    int x = 10;
    float y = 1.3f;
    char z = 'p';
    
    //Pointer declaration and initialization
    int *ptr_x = &x;
    float *ptr_y = &y;
    char *ptr_z = &z;

    //Printing the value
    printf("Value of x = %d\n", *ptr_x);//10
    printf("Value of y = %f\n", *ptr_y); // 1.3
    printf("Value of z = %c\n", *ptr_z); // p
    return 0;
}