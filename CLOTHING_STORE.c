#include<stdio.h>
int main()
{
    int n,i,j,c,p;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
            c=1;
            for(j=0;j<n;j++)
            {
                if(a[i]==a[j]&&i!=j)
                {
                    c++;
                    a[j]=-1;
                }
            }
            p+=c/2;
        }
    }
    printf("%d",p);
}