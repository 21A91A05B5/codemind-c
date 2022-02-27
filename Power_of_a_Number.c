#include<stdio.h>
#include<math.h>
int main()
{
    int X,Y,M,res,k;
    scanf("%d%d%d%d",&X,&Y,&M,&k);
    k=pow(X,Y);
    res=k%M;
    printf("%d",res);
}