#include "stdio.h"
#include "ft_str_is_alpha.c"
#include "../ex03/ft_str_is_numeric.c"

int main()
{
	char str[1024];
	char *c;

	c = str;
	printf("%i %i\n", ft_str_is_alpha(c), ft_str_is_numeric(c));

	c = "jahmanJODSAFEdsfakflaeJFfawfDFASDKFAWE";
	printf("%i %i\n", ft_str_is_alpha(c), ft_str_is_numeric(c));
	
	c = "59643684843435436846";
	printf("%i %i\n", ft_str_is_alpha(c), ft_str_is_numeric(c));
	
	c = "id sasl2q 3iu8934 q fjsdj;lfj1928 p1][][]";
	printf("%i %i\n", ft_str_is_alpha(c), ft_str_is_numeric(c));
}
