//Program to show maximum number through pointer
#include <stdio.h>//hearder file
int large(int *a,int *b)
{
    if(*(a)>*(b))
        return *(a);
    else
        return *(b);
}
int main()
{
    int x,y;//variable declaration
    printf("Enter the two\n");
    scanf("%d%d",&x,&y);//user input
    int lar=large(&x,&y);
    printf("Largest number=%d",lar);
}
