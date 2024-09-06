#include<stdio.h>
void modifyValue(int a){
    a = 15;
}

    int testFunction()
    {
        int x = 10;
        printf("Call by value:\n");

        modifyValue(x);

        printf("x = %d\n", x);
        return 0;
}