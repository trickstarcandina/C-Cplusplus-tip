#include <stdio.h>
main()
{
	int m,n,i,j;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
	{
	   for(j=1;j<=m;j++)
		{
			if(i==1 || i==n || j==1 || j==m)
			   printf("*");
			else 
			   printf(" ");	  
		}
		printf("\n");
    }
    return 0;
}    
