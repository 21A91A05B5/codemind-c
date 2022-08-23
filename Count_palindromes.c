#include<stdio.h>
int main()
{
    int n,i,arr[100],rev=0,r,temp,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        rev=0;
        while(temp)
        {
            r=temp%10;
            rev=rev*10+r;
            temp=temp/10;
        }
        if(rev==arr[i])
        {
            c+=1;
        }
        
    }
    printf("%d",c);
}