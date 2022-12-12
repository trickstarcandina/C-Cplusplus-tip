#include<stdio.h>
int a[10000][10000];
int b[10000][10000];
int c[10000][10000];
int main (){
	int m,n,k,i,j,h,x;
	scanf("%d%d%d",&m,&n,&k);
	for (i=1;i<=m;i++){
		for (j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for (i=1;i<=n;i++){
		for (j=1;j<=k;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for (i=1;i<=m;i++){
		for (j=1;j<=k;j++){
			for (h=1;h<=n;h++){
				x=x+a[i][h]*b[h][j];
			}
			c[i][j]=x;
			x=0;
		}
	}
	for (i=1;i<=m;i++){
		for (j=1;j<=k;j++){
			printf("%d	",c[i][j]);
			printf("\n");
		}
	}
	return 0;
} 

