#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int c=0,i;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if (s[i]==' ' && s[i+1]!=' ')
        {
            c++;
        }
    }
    printf("%d",c+1);
}