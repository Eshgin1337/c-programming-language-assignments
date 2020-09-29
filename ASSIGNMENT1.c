#include <stdio.h>
void numSwapper(int *x, int *y)
{
	int sw;
	sw=*x;
	*x=*y;
	*y=sw;
}
int main()
{
	int x, y;
	printf("Please enter the value of x: ");
        scanf("%d",&x);
	printf("Please enter the value of y: ");
	scanf("%d",&y);
	numSwapper(&x, &y);
	printf("Values after swapping: x=%d, y=%d\n", x, y);
	return 2;
}
