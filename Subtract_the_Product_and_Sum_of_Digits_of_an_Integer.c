#include<stdio.h>
int main()
{
    int n,i,sum=0,p=1,res,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
        p=p*r;
    }
    res=(p-sum);
    printf("%d",res);
    
}