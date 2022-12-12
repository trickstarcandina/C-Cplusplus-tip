#include <stdio.h>
int main ()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n-1;i++)
	{
		for (j=n;j>=n-i+1;j--)
			printf("%d",j);
		for (j=1;j<=2*(n-i)-1;j++)
			printf("%d",n-i+1);
		for (j=n-i+1;j<=n;j++)
			printf("%d",j);
		printf("\n");
	}
	for (i=n;i>=1;i--)
		printf("%d",i);
	for (i=2;i<=n;i++)
		printf("%d",i);
	printf("\n");
	for(i=n-1;i>=1;i--)
	{
		for (j=n;j>=n-i+1;j--)
			printf("%d",j);
		for (j=1;j<=2*(n-i)-1;j++)
			printf("%d",n-i+1);
		for (j=n-i+1;j<=n;j++)
			printf("%d",j);
		printf("\n");
	}
	return 0;
}
