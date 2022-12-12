#include <stdio.h>
main()
{
	char a,b,c;
	scanf("%c%c%c",&a,&b,&c);
	if (((a=='S') && (b=='S') && (c=='S')) || ((a=='N') && (b=='N') && (c=='N')))
		printf("Khong co nguoi chien thang");
	if (((a=='N') && (b=='S') && (c=='S')) || ((a=='S') && (b=='N') && (c=='N')))
		printf("Daisy");
	if (((a=='S') && (b=='N') && (c=='S')) || ((a=='N') && (b=='S') && (c=='N')))
		printf("Louis");
	if (((a=='S') && (b=='S') && (c=='N')) || ((a=='N') && (b=='N') && (c=='S')))
		printf("Boruto");
}  
