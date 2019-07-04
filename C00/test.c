#include "unistd.h"
#include "stdio.h"

#include "ex01/ft_print_alphabet.c"
#include "ex02/ft_print_reverse_alphabet.c"
#include "ex03/ft_print_numbers.c"
#include "ex04/ft_is_negative.c"
#include "ex05/ft_print_comb.c"
#include "ex06/ft_print_comb2.c"
#include "ex07/ft_putnbr.c"

int main()
{
	ft_print_alphabet();
	
	putchar('\n');

	ft_print_reverse_alphabet();

	putchar('\n');

	ft_print_numbers();

	putchar('\n');

	ft_is_negative(-10);
	ft_is_negative(-1);
	ft_is_negative(0);
	ft_is_negative(1);

	putchar('\n');

	ft_print_comb();

	putchar('\n');
	putchar('\n');

	ft_print_comb2();
	
	putchar('\n');
	putchar('\n');

	ft_putnbr(42);
	put_char(' ');
	ft_putnbr(-42);
	put_char(' ');
	ft_putnbr(9023485);
	put_char(' ');
	ft_putnbr(-452223);
	put_char(' ');
	ft_putnbr(-2147483647);
	put_char(' ');
	ft_putnbr(-2147483648);
	
	return 0;
}
