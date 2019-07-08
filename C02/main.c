#include "stdio.h"
#include "ex09/ft_strcapitalize.c"

int main()
{
	char c[] = "jahman Jose 1s th3 best -23945-3029 cou-cou di*latte";
	char *p = c;
	printf("%s\n", p);

	p = ft_strcapitalize(p);
	printf("%s\n", p);
}
