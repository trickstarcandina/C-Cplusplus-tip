#include <stdio.h>
main()
{
	int n,i,s=0,s1=0;
	scanf("%d",&n);
	for (i=0;i<=n;i++)
	{
		
		s1=s1+i;
		s+=s1;
	}
	printf("%d",s);
	return 0;
}  
