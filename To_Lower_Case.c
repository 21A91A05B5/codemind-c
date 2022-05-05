#include<stdio.h>
int main()
{
    int i;
    char str[100];
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    if(str[i]>='A' && str[i]<='Z')
     str[i]=str[i]+32;
    printf("%s",str);
}