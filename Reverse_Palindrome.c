#include<stdio.h>
int reverse(int n)
{
    int r,rev=0;
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    return rev;
}
int main()
{
    int x;
    scanf("%d",&x);
    do
    {
        x=x+reverse(x);
    }
    while(x!=reverse(x));
    printf("%d",x);
}