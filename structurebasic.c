//Program to display structure basic
#include <stdio.h>//header file
struct shoes
{
    char company[10];
    float price;
    int size;
};
int main()
{
struct shoes pair1={"Nike",6000.0,7};
struct shoes pair2={"Sneakers",7000.0,8};
struct shoes pair3={"Puma",5000.0,7};
printf("%s\n",pair1.company);
printf("%f\n",pair1.price);
printf("%d\n",pair1.size);
printf("%s\n",pair2.company);
printf("%f\n",pair2.price);
printf("%d\n",pair2.size);

}
