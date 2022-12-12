#include <stdio.h>
main()
{
	int n,i,s=0,dem=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
		dem=dem*i;
   	    s+=dem;
	}
	printf("%d",s);
    return 0;
}
c2
   int n,i,s=0,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
		int s1=1;
		for (int j=1;j<=i;j++)
		   s1*=j;
   	    s+=s1;
	}
	printf("%d",s);
    return 0;




