#include <stdio.h>
main()
{
	int a[100],i,j,n,x;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d%d",&j,&x);
	for (j=n;j<=i+1;j--)
		a[j]=a[j-1];
	a[i]=x;
	for (i=0;i<=n;i++)
		printf("%d",a[i]);
	return 0;	
}                            
