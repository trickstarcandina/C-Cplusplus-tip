#include <stdio.h>
int main 
{
	int n,i,j=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for (j=n;j<=n-i+1;j++)
			printf("%d",j);
		for (j=1;j<=2*(n-1)-1;j++)
			printf("%d",n-i+1);
		for (j=n-i+1;j<=n;j++)
			printf("%d",j);
	}
	return 0;
}
