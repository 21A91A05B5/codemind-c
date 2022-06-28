#include<stdio.h>
int main()
{
    int pron,i,n,flg;
    scanf("%d",&pron);
    for(i=1;i<n;i++)
    {
        if((i*(i+1))==pron)
        {
            flg=1;
            break;
        }
    }
    if(flg==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}