#include <stdio.h>

int main() {
   int n,i,j;
   scanf("%d",&n);
   for(i = 1; i <= n; i++) {
      for(j = 1; j <= i; j++)
		{
		 	if (((i==1) && (j==1)) || ((i%2==0) && (j%2==0)) || ((i%2==1) && (j%2==1)))
				printf("1 ");
			else 
				printf("0 ");
		}

      printf("\n");
   }
   return 0;
}
