#include <stdio.h>
main()
{
	int n,i,s1=0,s2=0,s3=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
	{
    	s1+=i;
        if(i%2==0) s2+=i;	
	}
	    s3=s1-s2;
	printf("%d %d %d",s1,s2,s3);
    return 0;
}




