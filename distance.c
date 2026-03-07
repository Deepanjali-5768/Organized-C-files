//Program for distance calculation
#include <stdio.h>//header file
void convert_distance(float km)//default function
{
float meter,feet,inch,cm;//variable declaration
meter=km*1000;
feet=km*3280.84;
inch=km*39370.1;
cm=km*100000;
printf("Distance in meter=%f\nDistance in feet=%f\nDistance in inch=%f\nDistance in centimeter=%f\n",meter,feet,inch,cm);
}
float main()//main function
{
float km;
printf("Enter the distance between two cities in km\n");
scanf("%f",&km);//taking value from user
if(km<0)
{
    printf("Distance can never be negative");
}
else
{
convert_distance(km);//returning the value to the default function
}
}
