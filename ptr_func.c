
// Pointers in C using Functions


//Create 3 functions check() cube() and main()
//check() function is used to check if the number which is pass on is a Armstrong or Not an Armstrong Number
//cube() function is used to seperate out each unit from the number cube them and add them
//main() function where everything is combined



//=======  main() function =======
// 2 variables are created number and org (where org is assigned the value of number)
// Both variables addresses are passed on in the cube() function (& = address of the variable)



//======= cube() function ========
// This function parameter receives 2 pointer variables
// In the While Loop the calculation is done
// And the address of store (&store) and the org number is passed on to the check() function




//======= check() function =======
//Receives 2 pointer in the parameter from cube()
//Here the conditioning are check and based on the conditioning each output is sent to the main() function




#include <stdio.h>

void check(int *num,int *check_number){
    if(*num == *check_number){
        printf("Yes, Armstrong Number");
    }
    else{
        printf("Not an Armstrong Number");
    }
}


void cube(int *num,int *org){

    int remainder,store = 0,cube;
    while(*num > 0){
        remainder = *num % 10;
        cube = remainder * remainder * remainder;
        store = store + cube;

        *num = *num / 10;
    }
    check(&store,org);

}

int main(void){
    int number,org = 0;

    printf("\nEnter Number : ");
    scanf("%d",&number);

    org = number;
    cube(&number,&org);


}