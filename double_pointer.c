#include <stdio.h>

int main(){
    int x = 10;
    printf("Address of x : %p\n",&x);

    int *ptr_A = &x;
    printf("Value *ptr_A Holding : %d\n",*ptr_A);    // used format specifier %d to get the value through pointer ptr_a to get the value of x
    printf("Address *ptr_A Holding : %p\n",&*ptr_A);  // called ptr_A with a & (Address of operator) to get the Address of x which is assigned

    int **ptr_B = &ptr_A; // used a double pointer and given the address of ptr_A
    printf("Value **ptr_B Holding : %d\n",**ptr_B);  // Value is printed of **ptr_B where the value is derived from x which is 10
    printf("Address **ptr_B is at : %p\n",&**ptr_B); // Address is printed of **ptr_B which its holding of ptr_A

}