#include "unistd.h"
#include "stdio.h"

#include "ex01/ft_print_alphabet.c"
#include "ex02/ft_print_reverse_alphabet.c"
#include "ex03/ft_print_numbers.c"

int main()
{
	ft_print_alphabet();
	
	putchar('\n');

	ft_print_reverse_alphabet();

	putchar('\n');

	ft_print_numbers();

	return 0;
}
