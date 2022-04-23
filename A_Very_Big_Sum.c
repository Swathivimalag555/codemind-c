#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long int a[n]; 
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    long int s=0;
    for(int i=0;i<n;i++)
    {
        s=s+a[i];
    }
    printf("%ld",s);
}