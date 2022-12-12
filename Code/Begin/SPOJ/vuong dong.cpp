#include <stdio.h>

int main(void) {
	int n,m=1,i,j,k;
	scanf("%d",&n);
	int a[100][100];
	k=n;
	for (i=1;i<=n;i++)
	{
		for (j=i;j<=2*n-i;j++)
		{
			a[i][j]=k;
		}
		for (j=i;j<=2*n-m;j++)
		{
			a[j][2*n-m]=k;
		}
		m=m+1;
		k=k-1;
	}
	for (i=1;i<=2*n-1;i++)
		for(j=2*n-1;j>=1;j--)
			a[j][i]=a[i][j];
	for (i=1;i<=2*n-1;i++)
	{
		for (j=1;j<=2*n-1;j++)
			printf("%d",a[i][j]);
		printf("\n");
	}
}
