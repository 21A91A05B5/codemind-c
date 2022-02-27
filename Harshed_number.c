#include<stdio.h>
int main()
{
    int sum=0,r,N,k;
    scanf("%d",&N);
     k=N;
    while(N>0)
    {
        r=N%10;
        N=N/10;
        sum=sum+r;
     }
     if(k%sum==0)
     {
         printf("True");
     }
     else
     {
         printf("False");
     }
}