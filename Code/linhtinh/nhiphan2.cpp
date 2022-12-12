#include<iostream>
using namespace std;
int t,n,k,kt=1,a[100],i,j;
void nhap(){
	kt=1;
	cin >> n >> k;
	for(i=1; i<=n; i++){
		a[i]=0;
	} 
}
void ketqua(){
	for(i=1; i<=n; i++){
		cout << a[i];
	}
	cout << endl;
}
int check(){
	int s=0;
	for(i=1; i<=n; i++){
		if(a[i]) s++;
	}
	if(s==k) return 1;
	return 0;
}
void next(){
	i=n;
	while(i>0 && a[i]==1){
		a[i]=0;
		i--;
	}
	if(i>0) a[i]=1; 
	else{
		kt=0;
	}	
}
main(){
	cin >> t;
	while(t--){
		nhap();
		while(kt){ 
			if(check()) ketqua();
			next(); 
		}
	}
	return 0;
}
