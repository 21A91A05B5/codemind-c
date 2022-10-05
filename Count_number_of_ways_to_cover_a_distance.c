int fun(int n)
{
    if(n<0)
    {
        return 0;
    }
    else if(n==0)
    {
        return 1;
    }
    return (fun(n-1)+fun(n-2)+fun(n-3));
}

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fun(n));
}