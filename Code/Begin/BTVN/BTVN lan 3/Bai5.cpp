#include<stdio.h>
#include <conio.h>
void nhap( int a[], int n ){
	scanf("%d", &n);
	for( int i = 0; i< n; i++ ){
		scanf("%d", &a[i]);
	}
} 
int kiemtramang(int a[],int n){
 	int c=1;
 	for(int i=0;i<n/2;i++){
 	if(a[i]!=a[n-1-i]) c=0;
 	}
 	return c; 
}
int main(){
	int n,a[100];
	nhap( a, n) ;
	if(kiemtramang(a,n)==0) 
		printf("ko phai mang doi xung ");
 	else 
	 	printf("day la mang doi xung");
	return 0;
} 
