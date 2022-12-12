#include <stdio.h>
int main()
{
	int n,i,j,k;
	long long a,b,c,d,e;
	scanf("%d",&n);
	d=1;
	c=1;
	for(i=1;i<=n-2;i++){
		d=d+c;
		c=d-c;
	}
	if ((n==0)||(n==1)) 
		d=1;
	e=d;
	while (d!=0){
		d=d/10;
		k=k+1;
	}
	a=0;
	if(n<=9) printf("%d",n);
	else{
		for (j=1;j<=n;j++){
			for (i=1;i<=k;i++){
				b=e%10;
				a=a+b;
				e=e/10;
			}
			if (a>9){
				e=a;
				a=0;
			}
			else break;
		}
		printf("%lld",a);
	}
	return 0;
}
	
	
