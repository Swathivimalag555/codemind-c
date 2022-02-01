#include<stdio.h>
int main()
{
    int i,n,temp=0;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
    {
        printf("not a prime");
        temp=1;
        break;
    }
    }
    if(temp==0 )
    printf("prime");
   return 0;
}