#include <stdio.h>
#include <string.h>

int main(void) {
	int a,b,x,y;
	char t[50];
	gets(t);
	scanf("%d%d",&a,&b);
	x=strcmp(t,"Daisy");
	y=strcmp(t,"Louis");
	if (a==1 && b==2 && x==0) printf("Daisy");
	else if (a==1 && b==2 && y==0) printf("Louis");
	else if (x==0) printf("Louis");
	else printf("Daisy");
	return 0;
}
