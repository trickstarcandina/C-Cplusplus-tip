#include<stdio.h> //he 10 ->sang he khac
#include<string.h>
void doicoso(int n,int b){
	int d,i;char s[100];
	while(n>0){
		d=n%b;
		if(d<10) s[i]='0'+d;
		else 	 s[i]=(char)('A'+(d-10));
		i++; n/=b;
	}
	//s[i]='\0';
	strrev(s); puts(s);
}
int main(){
	int n,b;
	scanf("%d%d",&n,&b);
	doicoso(n,b);
}
