#include<stdio.h>
int main()
{
    int i,c=0;
    char str[100];
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    if(str[i]>='0' && str[i]<='9')
    c++;
    if(c>=1)
    printf("Contains %d digit",c);
    else
    printf("Doesn't contain digit");
}