#include <stdio.h>
#include <math.h>
int main()
{
    int x,n,i,j,pro=1;
    float sum=0.0;
    scanf("%d%d",&x,&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            pro=pro*j;
        }
         sum=sum+pow(x,i)/pro;
    }
    printf("%f",sum);
}
