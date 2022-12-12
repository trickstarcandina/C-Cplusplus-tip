#include <stdio.h>
main()
{
	int m,n,i,j;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
	{
		for (j=0;j<m;j++) 
		   	printf("*");
			printf("\n");
	}
    return 0;
}   
