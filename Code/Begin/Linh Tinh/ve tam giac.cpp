#include <stdio.h>
#include <conio.h>

main()
{
	int n, i, j; 
	printf("\n Nhap chieu cao cua hinh tam giac : ");
	scanf("%d", &n);

	for (i=0; i<n; i++) 
	{
		for (j=n-1; j>i; j--)
			printf(" ");
        for (j=0; j<i*2+1; j++)
			if (j == 0 || j == i*2 || i == 0 || i == n-1)
				printf("*");
			else
				printf(" ");
        printf("\n");
	}
	getch();
}
