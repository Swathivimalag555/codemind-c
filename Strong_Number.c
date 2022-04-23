#include<stdio.h>
int main()
{
    int n,i,a,rem,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        i=1;
        a=1;
        rem=n%10;
        while(i<=rem)
        {
          a=a*i;
          i++;
        }  
        sum=sum+a;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("The number %d is a strong number",temp);
    }
    else
    {
        printf("The number %d is not a strong number",temp);
    }
    return 0;
}