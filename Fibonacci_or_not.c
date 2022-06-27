#include<stdio.h>
int main()
{
    int n,a=0,b=1,c=a+b;
    scanf("%d",&n);
    while(c<n)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(c==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}