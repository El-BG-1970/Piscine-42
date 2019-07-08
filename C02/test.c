#include "stdio.h"

char	*ft_char2hex(char c)
{
	char	out[3];
	char	*ret;
	char	templ;
	char	tempr;

	out[0] = '\\';
	ret = out;
	templ = c / 16;
	tempr = c % 16;
	if (templ >= 10)
		out[1] = 'a' + (templ - 10);
	else
		out[1] = '0' + templ;
	if (tempr >= 10)
		out[2] = 'a' + (tempr - 10);
	else
		out[2] = '0' + tempr;
	return(ret);
}

int main()
{
	char *c = ft_char2hex('\n');
	printf("%s, ,,,", c);
}
