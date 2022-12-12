#include <stdio.h>
main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int a[10001],i,j;
	for (i=0;i<=n-1;i++){
		for (j=0;j<=m-1;j++){
			scanf("%d",&a[m*i+j]);
		}
	}
	for (i=0;i<=n-1;i++){
		for (j=0;j<=m-1;j++){
			if((m*i+j)%m==0)
				printf("\n");
			printf("%d",a[m*i+j]);
		}
	}
}      
	
