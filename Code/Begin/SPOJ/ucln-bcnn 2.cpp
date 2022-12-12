#include <stdio.h>
long long ucln(long long a,long long b){
	int tg;
	while (b!=0){
		tg=a%b;
		a=b;
		b=tg;
	}
return a;
}
long long bcnn(long long a,long long b){
return (a*b)/ucln(a,b);
}
int main()

{
	long long a,b;
	scanf("%lld %lld",&a,&b);
	printf("%lld %lld",ucln(a,b),bcnn(a,b) );
    return 0;
}
