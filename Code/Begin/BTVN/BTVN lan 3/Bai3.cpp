#include "stdio.h"
int coconut(int a[], int n, int x)
{
	int dem = 0;
	for (int i=0;i<n;i++)
		if (a[i]==x	)
			dem ++;
	return dem;
}
int main ()
{
	int n, x, i;
	printf("nhap n");
	scanf("%d",&n);
	int a[n];
	for (i=0; i<n ;i++)
	 	{ 
	 		scanf ("%d", &a[i]);
	 	}
	printf("nhap x");
	scanf("%d",&x);
	printf("so phan tu x %d",coconut(a, n, x));
	return 0;
}      
