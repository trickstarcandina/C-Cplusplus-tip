#include<stdio.h>
void nhap( int a[], int n ){
	printf("\nNhap n = ");
	scanf("%d", &n);
	for( int i = 0; i< n; i++ ){
		printf("\nNhap a[%d] = ", i+1);
		scanf("%d", &a[i]);
	}
}
void sos( int a[], int b[] , int n ){
	for( int i = 0; i< n; i++ ){
		for( int j  = i; j < n; j++ ){
			if( a[j] == a[i] ) b[i]++;
		}
	}
}
void xuat( int a[], int b[], int n ){
	int max = 1;
	for( int i = 0; i< n; i++ ){
		if( b[i] > max ) max = b[i];
	}
	for( int i = 0; i< n; i++ ){
		if( b[i] == max ) 
			printf("\nPhan tu co gia tri: %d. Xuat hien %d lan.", a[i], b[i]);
	}
}
int main(){
	int a[100], b[100] = {0};
	int n;
	nhap( a, n );
	sos( a, b, n );
	xuat( a, b, n );
	return 0;
} 
