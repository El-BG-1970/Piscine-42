#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ft_strcpy.c"

int main()
{
	char j[10];
	char o[6];
	char s[5];
	char *e;
	char *moul;
	char *d;

	e = (char *)malloc(3 * sizeof(char));
	moul = e + 3*sizeof(char);

	d = ft_strcpy(j, "Jahman");
	d = j;
	printf("%s \n", d);
	d = ft_strcpy(o, "Jahman");
	d = o;
	printf("%s \n", d);
	d = ft_strcpy(s, "Jahman");
	d = s;
	printf("%s \n", d);
	d = ft_strcpy(e, "Jahman");
	d = e;
	printf("%s \n", d);
	printf("%s \n", e);
	printf("%s \n", moul);

	return(0);
}
