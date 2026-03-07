#include <stdio.h>
#include <string.h>
int main()
{
    char ch[]="I love my Country, India.";
    int l=strlen(ch);
    char v[60];
    strcpy(ch,v);
    printf("Length%d\n",l);
    printf("Duplicate=%s\n",v);
    printf("Lower case=%s\n",strlwr(ch));
    printf("Upper Case=%s\n",strupr(ch));
    int r=strcmp(ch,v);
    if(r==0)
    {
        printf("Equal");
    }
    else
    {
        printf("not equal");
    }
    printf("Reverse=%s\n",strrev(ch));
    strcat(ch,v);
    printf("Concated String=%s\n",ch);
}
