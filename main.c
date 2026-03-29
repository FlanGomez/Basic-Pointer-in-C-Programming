#include <stdio.h>

int main(){
    int x = 100;

    int *ptr_y = &x;
    //(Created a pointer variable using * and gave the address of x)
    //(Note : pointer variables only hold the Address of other variable)

    int *ptr_z = &*ptr_y;
    //(Here a pointer variable z is assigned another pointer variables address)


    printf("x : %d\n",x);
    printf("Address x : %p\n",&x);

    printf("ptr_y : %d\n",*ptr_y);// ptr_y already holding an address of x goes inside the address and search for the value and displays
    printf("Address ptr_y : %p\n",&*ptr_y);// An Address wil be displayed of x where it was assigned earlier in the code

    printf("ptr_z : %d\n",*ptr_z); // ptr_x already holding the address of ptr_y where ptr_y is holding address of x where the value is present
    printf("Address ptr_z : %p\n",&*ptr_z);// An Address is displayed of x where it was assigned earlier
}