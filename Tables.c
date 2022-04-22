#include<stdio.h>
int main()
{
    int a,r,i,b;
    scanf("%d%d",&a,&r);
    for(i=1;i<=r;i++)
    {
        if(i%2!=0)
        {
            printf("%d x %d = %d
",a,i,a*i);
        }
    }
    return 0;
}