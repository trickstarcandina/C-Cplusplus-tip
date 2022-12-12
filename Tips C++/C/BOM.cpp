#include<bits/stdc++.h>
using namespace std;
char a[200][200];
int b[200][200];
int c[200][200];
int main(){
	while(1){
		int m,n; cin>>n>>m;
		if(n==0 && m==0) return 0;
		else {
			for(int i=1;i<=n;i++){
				for(int j=1;j<=m;j++){
					cin>>a[i][j];
					if(a[i][j]=='*')	b[i][j]=1;
					else b[i][j]=0;
				}
			}
			for(int i=0;i<=n+1;i++){
				b[i][0]=0;
				b[i][m+1]=0;
			}
			for(int i=0;i<=m+1;i++){
				b[0][i]=0;
				b[n+1][i]=0;
			}
			for(int i=1;i<=n;i++){
				for(int j=1;j<=m;j++){
					c[i][j]=b[i-1][j-1]+b[i-1][j]+b[i-1][j+1]+b[i][j-1]+b[i][j+1]+b[i+1][j-1]+b[i+1][j]+b[i+1][j+1];
				}
			}
			for(int i=1;i<=n;i++){
				for(int j=1;j<=m;j++){
					if(a[i][j]=='*')	cout<<a[i][j];
					else cout<<c[i][j];
				}
				cout<<endl;
			}
		}
	}
} 