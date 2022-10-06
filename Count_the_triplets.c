#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        int n;
        scanf("%d",&n);
        int j,k,l,a[n];
        int c=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                for(l=0;l<n;l++)
                {
                    if(j!=k&&k!=l&&j>k&&k>l)
                    {
                        if(a[j]+a[k]==a[l])
                        {
                            c++;
                        }
                        if(a[k]+a[l]==a[j])
                        {
                            c++;
                        }
                        if(a[j]+a[l]==a[k])
                        {
                            c++;
                        }
                    }
                }
            }
        }
        if(c>0)
        {
            printf("%d
",c);
        }
        else
        {
            printf("%d
",-1);
        }
    }
}