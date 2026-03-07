//Program to count number of vowels
#include <stdio.h>//header file
#include <string.h>
int main()
{
    char s1[100];//array declaration for string input
    int i,l,c=0;
    printf("Enter a string\n");
    gets(s1);//user string input
    l=strlen(s1);//string length
    strlwr(s1);//converting string to lower case
    for(i=0;i<l;i++)//loop logic to count vowels
    {
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
            c++;
    }
    printf("\nNumber of Vowels=%d",c);
    return 0;
}
