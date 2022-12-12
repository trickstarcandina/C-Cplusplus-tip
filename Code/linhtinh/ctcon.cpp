#include<stdio.h>
int giaithua(int n){
	if(n<=1) return 1;
	else return (n*giaithua(n-1));
}
main(){
	int n;
	int x;
	n=9;
	x=giaithua(n);
	printf("%d",x);
}
