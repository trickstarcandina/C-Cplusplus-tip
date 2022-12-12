#include<stdio.h>
int C[50],b[50],n,k;

int kiemtra(int t,int a[],int k){
	for(int i=1;i<=k;i++)
		if(a[i]==t) return 0;
	return 1;	
}

int dem(int a[],int b[],int k){
	int d=0;
	for(int i=1;i<=k;i++){
		if(kiemtra(b[i],a,k)) d++; 
	}
	return d;
}

void Sinh(int C[],int b[],int k){
	int i=k;
	while(C[i]==n-k+i) i--;
	if(i==0) printf("%d\n",k);
	else {
		C[i]++;
		for(int j=i+1;j<=k;j++)
			C[j]=C[j-1]+1;
		printf("%d\n",dem(C,b,k));
	}
}

main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&k);
		for(int i=1;i<=k;i++) {
			scanf("%d",&C[i]);
			b[i]=C[i];
		}
			Sinh(C,b,k);
	}
}


