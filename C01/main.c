#include "stdio.h"
#include "ex00/ft_ft.c"
#include "ex02/ft_swap.c"

int main()
{
	int *ptr;
	int a;
	int xx, yy;
	int *x, *y;

	xx = 91;
	yy = 19;
	x = &xx;
	y = &yy;

	a = 1;
	ptr = &a;
	ft_ft(ptr);

	printf("value of a: %i\n\n", a);
	printf("Value of ptr: %i\n", *ptr);
	printf("addr of ptr: %p\n", &ptr);
	printf("addr pointed to: %p\n", ptr);

	printf("x: %i, y: %i \n", *x, *y);
	ft_swap(x, y);
	printf("x: %i, y: %i \n", *x, *y);
}
