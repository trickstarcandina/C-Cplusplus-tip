#include<stdio.h>
#include<conio.h>
void kt(int a[],int i){
	for (int j=0;j<i;j++){
		while(a[i]==a[j]){
			printf("Nhap lai gia tri a[%d]= ",i);scanf("%d",&a[i]);
			kt(a,i);
		}
	}
}
main(){
	int a[100],n;
	printf("Nhap so luong phan tu: "); scanf("%d",&n);
	for (int i=0;i<n;i++){
		printf("\t a[%d]= ",i); 
		scanf("%d",&a[i]);
		kt(a,i);
	}
	printf("Mang vua nhap la: ");
	for (int i=0;i<n;i++){
		printf(" %d",a[i]);
	}
	getch();
} 
