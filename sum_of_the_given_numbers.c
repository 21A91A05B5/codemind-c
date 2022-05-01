#include<stdio.h>
int main()
{
    int n,i,a[n],b[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d
",a[i]+b[i]);
    }
}