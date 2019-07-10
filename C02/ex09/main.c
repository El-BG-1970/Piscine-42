#include "stdio.h"
#include "ft_strcapitalize.c"

int main()
{
	char c[] = "^c~qpp^m";
	char *cc;
	cc = c;
	char *str = ft_strcapitalize(c);

	printf("%s\n", c);
	printf("%s\n", str);
}
