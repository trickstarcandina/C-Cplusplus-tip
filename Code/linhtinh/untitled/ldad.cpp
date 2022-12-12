#include<stdio.h>
int a[10000][10000];
int b[10000];
int main (){
	int n,i,j,k;
	scanf("%d",&n);
	k=1;
	if (n%2==1) a[n/2+1][n/2+1]=n*n;
	for (i=1;i<=n/2;i++){
			for (j=i;j<=n-i+1;j++) {
				a[i][j]=k;
				k=k+1;
			}
			for (j=i+1;j<=n-i+1;j++){
				a[j][n-i+1]=k;
				k=k+1;
			}
			for (j=n-i;j>=i;j--){
				a[n-i+1][j]=k;
				k=k+1;
			}
			for (j=n-i;j>=i+1;j--){
				a[j][i]=k;
				k++;
			}
		}
	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}		
}
