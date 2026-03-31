

#include <stdio.h>

int main(void){
    int arr[5],a = 0,b = 4;
    int *ptr_arr = arr;   // Created a pointer variable assigning the whole arr memory address

    while(a <= 4){ // Created a while loop asking for 5 elements
        printf("\nEnter Array ELement :");
        scanf("%d",&arr[a]);
        a++;
    }

    while (b >= 0) // Created a while loop printing the 5 elements in a Reverse manner
    {
        //Reverse an array
        printf("%d\n",ptr_arr[b]); // user ptr_arr because needed the dereferenced values
        b--;
    }
    
}

