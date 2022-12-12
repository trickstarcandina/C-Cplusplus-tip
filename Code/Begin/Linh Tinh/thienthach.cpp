#include<stdio.h>  
#include<math.h>  

int main()  
{  
	int a,b,i=2,dem=0;  
	scanf("%d",&a);  
	while (dem<a){
		int j=1;
		for (int k=2;k <=sqrt(i);k++)
			if (i%k==0){
				j=0;
				break;
			}
		if (j==1){
			printf("%d ",i);
			dem++;
		}	 
		i++;
	}
	return 0;		
}   
