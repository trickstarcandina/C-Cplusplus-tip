#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,c,k,sp=1;
    scanf("%d",&n);
    sp=n-1;
    for(k=1;k<=n;k++)
    {
        for(c=1;c<=sp;c++)
        printf(" ");
        sp--;
        for(c=1;c<=2*k-1;c++)
        printf("*");
        printf("\n");
    }
    sp=1;
    for (k=1;k<=n-1;k++)
    {
        for(c=1;c<=sp;c++)
        printf(" ");
        sp++;
        for(c=1;c <=2*(n-k)-1;c++)
        printf("*");
        printf("\n");
    }
    return 0;
}        
