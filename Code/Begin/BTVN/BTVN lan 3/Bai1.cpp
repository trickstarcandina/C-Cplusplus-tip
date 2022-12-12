#include "stdio.h"
int main ()
{
	int n, i ;
	scanf("%d",&n);
	int mang[n], max;
	for (i=0; i<n ;i++)
	 	{ 
	 		scanf ("%d", &mang[i]);
	 		max = mang[0];
	 	}
	for (i=0; i<n ;i++)
		{ 
	 		if (max<mang [i]) 
	      		max=mang[i];
	 	}
    printf ("max cua mang: %d", max);
	return 0;
} 
