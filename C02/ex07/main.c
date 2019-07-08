#include "stdio.h"
#include "stdlib.h"
#include "ft_strupcase.c"

int main()
{
	char ad[] = "met dASFD  dfasdfSDAFLS WE fsdaD FSA 15093428750988()*&%&^%+)#@*_@!)e la merde";

	printf("%s \n", ad);
	ft_strupcase(ad);
	printf("%s \n", ad);
}
