#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
    int i,k;
    k=pow(n,0.5);
    if(n==1)
    {
        return 0;
    }
    for(i=2;i<k+1;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,c,d,e;
    c=0;
    e=0;
    scanf("%d",&n);
    if(is_prime(n))
    {
        while(n)
        {
            d=n%10;
            if(is_prime(d))
            {
                c+=1;
            }
            e+=1;
            n=n/10;
        }
        if(c==e)
        {
            printf("Mega Prime
");
        }
        else
        {
            printf("Not Mega Prime
");
        }
    }
    else
    {
        printf("Not Mega Prime");
    }

}