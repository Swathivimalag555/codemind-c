#include<stdio.h>
int main()
{
    int n,a[10000],i,j,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
            
        }
        if(c>n/2)
        {
            printf("%d",a[i]);
            break;
        }
    }
}