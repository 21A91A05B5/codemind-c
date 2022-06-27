#include<stdio.h>
int main()
{
    int n,i,rev=0,temp,r;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(rev==temp)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}