#include<bits/stdc++.h>
using namespace std;
long long a[10000007];
int main(){
	for (int i = 0; i <= 10000001; i++)
		a[i]=1;
	for (int i = 2; i <= 5000000; i++){ 
		if (a[i]==1){
			for (int j = i * 2; j < 10000001; j += i){
				long long k = j, tmp = i;
				while (k%i == 0){
					k = k / i;
					tmp=tmp*i;
				}
				a[j] *= (tmp-1) / (i - 1);
			}
		}
	}
	long long m,n;
	cin>>m>>n;
	long long t=0;
	for(long long i=m;i<=n;i++){
		if(i==0)
			continue;
		if(a[i]==1)
			t=t+i-1;
		else
			t=t+abs(2*i-a[i]);
		if(i==1) 
			t++;
	}
	cout<<t;
}
