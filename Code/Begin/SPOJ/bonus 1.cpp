#include <stdio.h>
main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for (j=1;j<=n;j++)
		printf("%d ",j);
	printf("\n");
	for (j=1;j<=n;j++)
	{
		for(i=1;i<=n;i++)
			{
				k=i-j;
				if (k==0) k=n;
				if (k<0) k=k+n;
				printf("%d ",k);
			}
		printf("\n");
	}
	return 0;
}
