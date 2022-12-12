#include<bits/stdc++.h>
using namespace std;
long long kt(char *w,char *p,int h){
    if(*w==0) return 0;
    if(*w=='?'){
        return (9-(*p-'0'))*(long long)pow(10,h-1)+kt(w+1,p+1,h-1);
    }
    else if(*w<*p) return 0;
    else if(*w>*p) return (long long)pow(10,h);
    return kt(w+1,p+1,h);
}
int main(){
	int t=0;
    long long k[50000];
    do{
        int h=0;
		char w[100]; char x[100];
        cin>>w;
		if(w[0]=='#') break; 
		cin>>x;
        for(int j=0;j<strlen(w);j++){
			if(w[j]=='?') h++;
		} 
        t++;
        k[t] = kt(w,x,h);
    }
	while(1);
    for(int i=1;i<=t;i++)
		cout<<k[i]<<endl;
}