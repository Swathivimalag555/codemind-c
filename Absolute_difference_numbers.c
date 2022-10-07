#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,a,d,b,rev=0,diff,c,e;
    scanf("%d %d",&n,&x);
    c=(pow(10,x));
    a=n%c;
    while(n)
    {
        d=n%10;
        n=n/10;
        rev=rev*10+d;
    }
    b=rev%c;
    rev=0;
    while(b)
    {
        d=b%10;
        b=b/10;
        rev=rev*10+d;
    }
    diff=a-rev;
    e=abs(diff);
    printf("%d",e);
    return 0;
    
}