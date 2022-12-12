#include <stdio.h>
main()
{
	int a=0;
	scanf("%d",&a);
	while ((a<0) || (a>10))
	{
		scanf("%d",a);
	}
	printf("diem la %d",a);	
    return 0;
}




