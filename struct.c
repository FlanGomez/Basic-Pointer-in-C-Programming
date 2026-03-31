

#include <stdio.h>

// Created struct name Person and have 3 members name, age, salary
struct Person
{
    char name[30];
    int age;
    float salary;

};


int main(void){
    struct Person person; // Through Person class i created an instance name 'person'
    struct Person *ptr_struct = &person; // created a Pointer where it is given an address of the instance person

// Note :
//       '    ->    ' Arrow is arrow operator and it is used to access the members

    printf("\nEnter Name : ");
    scanf("%[^\n]",&ptr_struct ->name); // the member 'name' is called using the instance

    printf("\nEnter Age : ");
    scanf("%d",&ptr_struct ->age);  // the member 'age' is called using the instance

    printf("\nEnter Salary : ");
    scanf("%f",&ptr_struct ->salary);  // the member 'salary' is called using the instance

    printf("\n Name : %29s \nAge : %d \nSalary:%f",ptr_struct->name,ptr_struct ->age,ptr_struct ->salary);

}