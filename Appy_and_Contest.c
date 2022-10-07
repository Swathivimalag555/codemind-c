#include<stdio.h>
int main()
{
    int t,n,a,b,k,i,h,d;
    scanf("%d",&t);
    while(t)
    {
        scanf("%d",&n);
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&k);
        h=n/a;
        d=n/b;
        if(h+d>=k)
        {
           printf("Win
");
        }
        else
        {
               printf("Lose
");
        }
        
        t-=1;
    }
}