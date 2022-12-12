#include "stdio.h"
int main ()
{
	float mang[10], max;
	int i ;
	for (i=0; i<10;i++)
	 { 
	 	printf ("\n mang[%d] = ",i);
	 	scanf ("%f", &mang[i]);
	 	max = mang[0];
	 }
	 for (i=0; i<10;i++)
	 { 
	 if (max<mang [i]) 
	      max=mang[i];
	 }
    printf ("max cua mang: %f", max);
	return 0;
}

