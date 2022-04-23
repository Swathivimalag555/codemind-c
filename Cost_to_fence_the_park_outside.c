#include<stdio.h>
int main()
{
    int L,B,W,C,area,tot_cost;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    area=((L+2*W)*(B+2*W))-L*B;
    tot_cost=area*C;
    printf("%d",tot_cost);
    return 0;
}