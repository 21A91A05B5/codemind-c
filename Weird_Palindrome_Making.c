#include<stdio.h>
int main()
{
    int t,c=0,a,arr[100],i;
    scanf("%d",&t);
    while(t)
    {
        scanf("%d",&a);
        c=0;
        for(i=0;i<a;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<a;i++)
        {
            if(arr[i]%2!=0)
            {
                c+=1;
            }
        }
        printf("%d
",c/2);
        t=t-1;
    }
}