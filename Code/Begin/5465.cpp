#include <stdio.h>
main(){
	int a[100][100],i,j,t=0,n,m;
	scanf("%d%d",&n,&m);
	for (i=0;i<n;i++){
		if(i%2==0)
			for (j=0;j<m;j++){
				a[j][i]=t;
				t+=2;
			}
		else {
			for (j=m-1;j>=0;j--){
				a[j][i]=t;
				t+=2;
			}
		}
	}
	for (i=0;i<n;i++){
		for (j=0;j<n;j++)
			printf("%d ",a[i][j]);
		printf("\n");	
	
	}
} 
nhap mang 
2 3 5
7 11 13 
17 21 23
