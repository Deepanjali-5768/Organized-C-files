//Program for matrix operation
#include <stdio.h>//header file
int main()
{
int m,n;//variable declaration
int i,j;
printf("Enter no.of rows X column\n");
scanf("%d%d",&m,&n);
int arr1[m][n];
int arr2[m][n];
int arr3[m][n];
int arr4[n][m];
int arr5[n][m];
printf("Enter values in 1st the matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&arr1[i][j]);
}
}
printf("Enter values in 2nd matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&arr2[i][j]);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",arr1[i][j]);
}
printf("\n");
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",arr2[i][j]);
}
printf("\n");
}
while(getchar()!='\n');
char ch;
printf("Enter operation +,-,*,t for transpose\n");
scanf("%c",&ch);
switch(ch)
{
case '+':
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
arr3[i][j]=arr1[i][j]+arr2[i][j];
printf("%d\t",arr3[i][j]);
}
printf("\n");
}
break;
case '-':
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
arr3[i][j]=arr1[i][j]-arr2[i][j];
printf("%d\t",arr3[i][j]);
}
printf("\n");
}
break;
case '*':
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
arr3[i][j]=arr1[i][j]*arr2[i][j];
printf("%d\t",arr3[i][j]);
}
printf("\n");
}
break;
case 't':
 for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                arr4[j][i]=arr1[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                printf("%d\t",arr4[i][j]);
            }
            printf("\n");
        }
         for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                arr5[j][i]=arr2[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                printf("%d\t",arr5[i][j]);
            }
            printf("\n");
        }
break;
default:
printf("Invalid choice");
}
}
