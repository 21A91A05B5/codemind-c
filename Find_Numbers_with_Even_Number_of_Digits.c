#include<stdio.h>
int main()
{
    int n,i,arr[100],dc=0,c=0,temp,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        dc=0;
        temp=arr[i];
        while(temp)
        {
            r=temp%10;
            temp=temp/10;
            dc++;
        }
        if(dc%2==0)
        {
            c++;
        }
    }
    printf("%d",c);
    
}