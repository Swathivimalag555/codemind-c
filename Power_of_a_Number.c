#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,res=0;
    scanf("%d%d%d",&x,&y,&m);
    res=pow(x,y);
    res=res%m;
    printf("%d",res);
}