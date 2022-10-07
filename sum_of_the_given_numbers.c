#include<stdio.h>
int main()
{
    int i,j,m,sum;
    int arr[100][100];
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<2;j++)
        {
            sum=sum+arr[i][j];
        }
        printf("%d",sum);
        printf("
");
    }
}