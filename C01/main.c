#include "stdio.h"
#include "stdlib.h"
#include "ex00/ft_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"
#include "ex07/ft_rev_int_tab.c"

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
	printf("x: %i, y: %i \n\n", *x, *y);

	int b, c;
	int *v, *w;
	b = 14;
	c = 3;
	v = (int *)malloc(sizeof(int));
	w = (int *)malloc(sizeof(int));
	ft_div_mod(b, c, v, w);
	printf("%i / %i = %i * %i + %i\n", b, c, c, *v, *w);
	*v = b; 
	*w = c;
	ft_ultimate_div_mod(v, w);
	printf("%i %i\n", *v, *w);
	
	b = 1345;
	c = 54;
	ft_div_mod(b, c, v, w);
	printf("%i / %i = %i * %i + %i\n", b, c, c, *v, *w);
	*v = 1345;
	*w = 54;
	ft_ultimate_div_mod(v, w);
	printf("%i %i\n", *v, *w);

	ft_putstr("\n\nJahman jose is the best!!#@#@#$%#!@n\n");
	printf("%i\n\n", ft_strlen("\n\nJahman jose is the best!!#@#@#$%#!@n\n\n"));

}
