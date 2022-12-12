#include<iostream>
using namespace std;
void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
main(){
	int *ptr;
	ptr=new int[10]; // cap phat 1 vung nho, 10 o int
	for(int i=0;i<10;i++)
		ptr[i]=i; //dung ptr nhu mang
	for(int i=0;i<10;i++){
		cout <<*ptr<<", ";
		ptr++;// chuyen sang o tiep theo
		
	}
	delete ptr; // thu hoi vung nho do ptr tro vao
}
