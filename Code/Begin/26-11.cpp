#include <stdio.h>
main(){
	int a[100] [100],n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for (j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++){
		for (j=0;j<n;j++)
			printf("%d",a[i][j]);
	}	
} 
