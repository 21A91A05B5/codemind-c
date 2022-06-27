#include<stdio.h>
int main()
{
    int n,r,i;
    static int arr[100];
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        arr[r]++;
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]>1)
        {
            printf("Not Unique Number");
            break;
        }
    }
    if(i==10)
    {
        printf("Unique Number");
    }
}