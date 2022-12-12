#include <stdio.h>
#include <math.h>
main()
{
	int i,j,x,n;
	long long mu=1,k=1;
	double e=1;
    scanf("%d%d",&x,&n);
    for (i=1;i<=n;i++){
    	mu=mu*x;
    	k=k*i;
    	e=e+(double) mu/k;
    }
   	printf("%.5lf",e);
    return 0;
}
