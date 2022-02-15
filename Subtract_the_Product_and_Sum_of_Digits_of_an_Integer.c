#include<stdio.h>
int main()
{
    int n,sum=0,product=1,res,temp,d;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    n=temp;
    while(n)
    {
         d=n%10;
        product=product*d;
        n=n/10;
    }
    res=product-sum;
    printf("%d",res);
    return 0;
}