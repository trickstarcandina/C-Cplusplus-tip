#include<stdio.h>
#include <conio.h>
int main(){   
	int a[100],max1,max2;
    int n,i,j,k=0,stt=0;
    printf("Nhap so phan tu cua mang = "); 
	scanf("%d",&n);
    for(int i=0;i<n;i=i+1){
        printf("\na[%d]= ",i);
        scanf("%d",&a[i]);
    }
    max1=a[0];
    for(i=0;i<n;i=i+1){
        if(a[i]>max1)
            max1=a[i];
    }
    max2=0;
    for(i=0;i<n;i=i+1){
        if(a[i]>max2 && a[i]!=max1){
            max2=a[i];
            stt=i+1;
        }
    }
       printf("So co gia tri lon thu hai la: %d",max2);
       printf("\nSo do dung thu %d trong day.",stt);
}     
