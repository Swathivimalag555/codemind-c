#include<stdio.h>
#include<string.h>
int main()
{
    char st[20];
    scanf("%[^
]s",st);
    if(strlen(st)==10)
    {
        if(st[0]==0)
        {
            printf("invalid");
        }
        else
        {
             printf("Valid");
        }
    }
    else
    {
        printf("Invalid");
    }
    
}