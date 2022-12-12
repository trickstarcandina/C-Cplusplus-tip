#include<stdio.h>
#include<math.h>
int a[10000][10000];
int b[10000];
int main (){
	int m,n,k=1,i,j,h,l;
	scanf("%d%d",&m,&n);
	for (i=1;i<=m;i++){
		for (j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
			b[k]=a[i][j];
			k=k+1;
		}
	}
	for (i=1;i<=k;i++){
		for (j=i+1;j<k;j++){
			if(b[i]>b[j]){
				l=b[i];
				b[i]=b[j];
				b[j]=l;
			}
		}
	}
	k=1;
	for (i=1;i<=m;i++){
		for (j=1;j<=n;j++){
			printf("%d ",b[k]);
			k=k+1;
		}
		printf("\n");
	}
	
}
