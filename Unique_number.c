#include<stdio.h>
int main()
{
    int n,d,i;
    static int arr[10];
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        arr[d]++;
        n=n/10;
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