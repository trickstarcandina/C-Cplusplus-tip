#include<bits/stdc++.h>
using namespace std;
int b[10000][10000];
int w[10000];
int main(){
	int m,n;
	cin>>m>>n;
	for(int i=1;i<=n;i++){
		cin>>w[i];
	}
	for(int i=0;i<=n+1;i++){
		for (int j=0;j<=m+1;j++)
		    b[i][j]=0;
	}
	for(int i=1;i<=n;i++){
		for (int j=0;j<=m;j++){
			b[i][j]=b[i-1][j];
			if(j>=w[i] && b[i][j]<b[i-1][j-w[i]]+w[i])
				b[i][j]=b[i-1][j-w[i]]+w[i];
		}
	}
	cout<<b[n][m];

}
