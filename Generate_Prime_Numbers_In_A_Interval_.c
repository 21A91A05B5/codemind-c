#include<stdio.h>
int main()
{
    int a,b,i,j,flag;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        if(i==1 || i==0)
            continue;
        flag=1;
        for(j=2;j<=i/2;++j)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            printf("%d
",i);
        }
        
    }
}