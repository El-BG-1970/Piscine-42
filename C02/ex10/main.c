#include "stdio.h"
#include "ft_strlcpy.c"
#include "string.h"

int main()
{
	char c[1024];
	char z[1024];
	char zz[1024];

	char *ss = "Jahman jose is the best";
	char *d = c;
	char *ww = "Jahman jose is the best";
	char *x = z;
	char *yy = "Jahman jose is the best";

	printf("%s, %lu\n", ss, strlen(ss));
	ft_strlcpy(d, ss, strlen(ss));
	printf("%s\n", d);

	printf("%s, %lu\n", ww, strlen(ww));
	unsigned long j = strlcpy(ss, ww, strlen(ss));
	printf("%s, %lu\n", x, j);

	printf("%s, %lu\n", ww, strlen(ww));
	unsigned long a = ft_strlcpy(x, ww, 7);
	printf("%s, %lu\n", x, a);

	printf("%s, %lu\n", ww, strlen(ww));
	unsigned long b = strlcpy(zz, yy, 7);
	printf("%s, %lu\n", zz, b);
}
