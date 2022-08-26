#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++) 
    {
        int x,y,no=0;
        scanf("%d %d",&x,&y);
        for(int i=x;i<=y;i++)
        {
            if(i%10==3 || i%10==9 || i%10==2)
            {
                no++;
            }
        }
        printf("%d
",no);
    }
}