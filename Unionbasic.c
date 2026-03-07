//Program to show basic working of Union Function
#include <stdio.h>//header file
union personal//union function
{
    char name[50];//variable declaration
    int year;
    float salary;
};
int main()
{
    union personal person1;//union function object
    printf("Person details\n");
    person1.name[]="Xyz";
    person1.year=2007;
    person1.salary=7000000.2;
    printf("%s\n",person1.name);//displaying output through union call
    printf("%d\n",person1.year);
    printf("%f\n",person1.salary);
}
