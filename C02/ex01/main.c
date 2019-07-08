#include "stdio.h"
#include "stdlib.h"
#include "ft_strncpy.c"

int main()
{
	char *t;
	char *i;
	char *c;
	char *a;

	t = (char *)malloc(10 * sizeof(char));
	ft_strncpy(t, "Jahman", 6);
	printf("%s\n", t);

	i = (char *)malloc(10 * sizeof(char));
	ft_strncpy(i, "Jahman", 2);
	printf("%s\n", i);

	c = (char *)malloc(10 * sizeof(char));
	ft_strncpy(c, "Jahman", 22);
	printf("%s\n", c);

	a = (char *)malloc(3 * sizeof(char));
	ft_strncpy(a, "Jahman", 22);
	printf("%s\n", a);
	printf("%c...", a[2]);
}
