#include<stdio.h>
int isitpal(int n)
{
    int temp=0,d,r=0;
    temp=n;
    while(n)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    n=temp;
    if(n==r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a[100],i,k;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }
for(i=0;i<k;i++)
{
    if(isitpal(a[i]))
    {
        printf("True");
        printf("
");
    }
    else
    {
        printf("False");
        printf("
");
    }
    
}
}