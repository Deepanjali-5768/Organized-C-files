#include <stdio.h>
#include <string.h>
int main()
{
    char ch[]="I love my Country, India.";
    int l=strlen(ch);
    char v[60],g[60];
    printf("Length%d\n",l);
    printf("Lower case=%s\n",strlwr(ch));
    printf("Upper case=%s\n",strupr(ch));
    printf("Reverse=%s\n",strrev(ch));
    strcpy(v,strrev(strlwr(ch)));
    int r=strcmp(ch,v);
    printf("Copied String=%s\n",v);
    printf("%d\n",r);
    printf("First char=%d\n",strchr(ch,'c')-ch);
    printf("Last char=%d\n",strrchr(ch,'i')-ch);
    printf("Concatination=%s\n",strcat(ch,v));
    }
