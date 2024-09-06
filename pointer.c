#include "funref.c"
int testPointer()
{
    int x = 10;                                     // Normal variable declaration and initialization
    int *ptr;                                       //Pinter declaration
    printf("Value of variable x = %d\n", x);        //10
    printf("Address of variable x = %d\n", &x);     //6422284
    ptr = &x;                                       //Pointer initialization value with address of x variable
    printf("Address of pointer ptr = %d\n", &ptr);  //6422280
    printf("Value of pointer x = %d\n", *ptr);      //10
    *ptr = 20;                                      //            
    printf("Value of x = %d\n", *ptr);              //20 Update value of x 

    return 0;
}