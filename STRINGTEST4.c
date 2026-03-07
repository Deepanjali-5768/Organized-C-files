#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char firstname[30];
    char lastname[30];
    printf("Enter first name \n");
    gets(firstname);
    printf("Enter last name \n");
    gets(lastname);
    int l=strcmp(firstname,lastname);
    printf("String difference=%d\n",l);
    strcat(firstname," ");
    strcat(firstname,lastname);
    puts(firstname);
    return 0;
}
