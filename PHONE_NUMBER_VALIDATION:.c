#include<stdio.h>
int main()
{
    long long int ph;
    scanf("%lld",&ph);
    if(ph>=1000000000 && ph<=9999999999)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}