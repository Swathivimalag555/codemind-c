#include<stdio.h>
int  main()
{
    int num[12][12],i,j,r,c,sum=0;;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum=sum+num[i][j];
        }
    }
    printf("%d",sum);
}