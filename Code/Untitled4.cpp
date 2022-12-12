#include<iostream>
#include<algorithm>
using namespace std;
void nhap(int n,float a[]){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void hienThi(int n,float a[]){
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
void sapXep(int n,float a[]){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]) {
				float t=a[i]; a[i]=a[j]; a[j]=t;
			}
		}
	}
}

int Search(float a[], int n, float x){ 
	int left = 0;
	int right = n-1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (x == a[mid]) 
			return mid;
		else if (x > a[mid]) 
			right = mid -1 ;
		else if (x < a[mid]) 
			left = mid + 1;
	} 
	return -1;
}
int timX(int n,float a[], float x){

	if(Search(a,n,x)==-1) return -1;
	else return Search(a,n,x);
}
void chen(int &n,float a[],float b[],float x){
//	float vitri = Search(a,n,x);
//	b[1]=x;
	for(int i=0;i<n+1;i++){
		if(a[i]>=x) {
			b[i]=a[i];
			b[i+1]=x;
		}
		else {
			b[i+1]=a[i];
		}		
	}
	
}
int main(){
	int n;
	cin>>n;
	float a[n];
	float b[n+1];
	nhap(n,a);
	hienThi(n,a);
	sapXep(n,a);
	hienThi(n,a);
	
	float x; cin >> x;
	cout<<"vi tri can tim la: "<<timX(n,a,x)<<endl;
	chen(n,a,b,x);
	cout<<"day moi la"<<endl;
	hienThi(n+1,b);
	return 0;
}
