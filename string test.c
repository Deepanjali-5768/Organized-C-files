//Program to show basic working of some string function
#include <stdio.h>
#include <string.h>
int main()
{
    char ch[]={'H','e','l','l','o','w',' ','C','\0'};
    char s[50];
    scanf("%s",&s);
    printf("%s\n",ch);
    int l=strlen(ch);
    char g[l];
    strcpy(g,ch);
    printf("Copied String=%s\n",g);
    int r=strcmp(s,ch);
    if(r==0)
    {
        printf("String equal");
    }
    else
    printf("String not equal%d\t",r);
}
