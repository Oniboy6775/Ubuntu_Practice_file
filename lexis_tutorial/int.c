#include <stdio.h>
/*
 * main - entry point
 * Description - integer data type(size)
 * return - Always Success
 */
int main(void)
{
	int x,y;
	printf("enter the value of x followed by y(i.e 3 5):\n");
	scanf("%d %d",&x,&y);
	printf("the value of x=%d and y=%d\n", x,y);
	printf("the size of x=%ld bytes in memory\n the size of y=%ld bytes in memory",sizeof x,sizeof y);
return 0;
}
