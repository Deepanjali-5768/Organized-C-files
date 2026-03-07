//Program for structure
#include <stdio.h>
#include <stdio.h>
struct personal//structure
{
    char name[50];
    int age;
    float marks;
};
int main()
{
    int n;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    int i,t=0;
    struct personal p;
    for(i=0;i<n;i++)
    {
    scanf("%s",&p.name);
    scanf("%d",&p.age);
    scanf("%f",&p.marks);
    printf("Student details\n");
    printf("%s",p.name);
    printf("\n%d\n",p.age);
    printf("%f\n",p.marks);
    }
}
