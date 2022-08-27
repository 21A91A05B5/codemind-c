#include<stdio.h>
int main()
{
   int i,n,arr[100],j,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m=arr[0];
     for(i=0;i<n;i++)
     {
         if(m<=arr[i])
         {
             m=arr[i];
         }
     }
    
     for(j=1;j<=m;j++)
     {
         int c=0;
         for(i=0;i<n;i++)
         {
             if(arr[i]%j==0)
             {
                 c++;
             }
         }
         if(c==n)
         {
             if(k<j)
             {
                 k=j;
             }
         }
        
     }
    printf("%d",k);

}