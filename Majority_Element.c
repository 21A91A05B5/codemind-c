#include<stdio.h>
int main()
{
    int n,j,i;
    scanf("%d",&n);
    int arr[n];
    int max=0,c,maxelement;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c>max)
        {
           max=c; 
           maxelement=arr[i];
        }
        
    }
    printf("%d",maxelement);
    return 0;
    
}