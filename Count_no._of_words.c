#include<stdio.h>
int main()
{
    char str[100];
    int i,k=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        {
            k++;
        }
    }
    printf("%d",k+1);
}