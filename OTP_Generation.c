#include<stdio.h>
#include<string.h>
#include<math.h>
int  main()
{
    char str[100];
    scanf("%[^
]s",str);
    int i;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            if((int)(str[i]-48)%2==1)
            {
                printf("%d",(int)pow((str[i]-48),2));
            }
        }
    }
}