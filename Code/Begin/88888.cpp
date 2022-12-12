#include <stdio.h>
main () {
	int a[100][100],b[100][100],m,n,i,j ;
	scanf("%d",&m);
	for (i=0;i<m;i++){
		for (j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d",&n);
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for (i=0;i<m;i++){
		for (j=0;j<m;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	if (m==n){
		for (i=0;i<n;i++){
		   	for (j=0;j<m;j++){
				printf("%d ",a[i][j]+b[i][j]);	
			}
		printf("\n");	
		}
		
	}	
} 
