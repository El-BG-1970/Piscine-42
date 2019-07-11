#include "stdio.h"
#include "ft_strcat.c"
#include "string.h"

int main()
{
	char c1[28] = "je te latte";
	char c2[28] = "je te latte";
	char c3[] = " bien mon soss";

	printf("%s\n", ft_strcat(c1, c3));
	printf("%s\n", strcat(c2, c3));
}
