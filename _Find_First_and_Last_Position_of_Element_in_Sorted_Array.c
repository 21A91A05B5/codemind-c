#include<stdio.h>
int main()
{
    int n,i,arr[100],f=-1,l=-1,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&c);
    for(i=0;i<n;i++)
    {
        if(arr[i]==c && f==-1)
        {
            f=i;
        }
        if(arr[i]==c)
        {
            l=i;
        }
    }
    printf("%d %d",f,l);
}