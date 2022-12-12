#include "stdio.h"
#include "math.h"
int main ()
{
	int n0=0,n1=1,n;
	scanf("%d",&n);
	printf("%d %d ",n0,n1);
	for(int i=2;i<=n;i++){
		int n2=n0+n1;
		printf("%d ",n2);	
		n0=n1;
		n1=n2;
	}	
	return 0;
}	
