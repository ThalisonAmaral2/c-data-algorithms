#include<stdio.h>

int main()
{
    int a[3];   //Declaration

    // - Storing values, this is Assignment 
    a[0] = 27;
    a[1] = 2;
    a[2] = 10;

    int b[3] = {5,19,30};   //Declaration and Initialization

    //When the program is running, it is running in the Main Memory which has 3 sections: Code Section -> Stack -> Heap

    //  1 - When any variable is declared, it is created inside the Stack 
    //  2 - Then the variable will be directly accessible into the main Function
    //      a - We can directly store values

}