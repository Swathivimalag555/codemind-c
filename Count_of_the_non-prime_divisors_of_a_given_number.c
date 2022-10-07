#include<stdio.h>
int is_prime(int n)
{
    int i,c=0;
    for(i=2;i<=n/2;i++)
    {
        if (n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        return 1;
    }
    return 0;
    
}
int main()
{
    int n,cou=2,i;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            if(is_prime(i))
            {
                i++;
                continue;
            }
            else
            {
                cou++;
            }
        }
    }
    printf("%d",cou);
    return 0;
}