#include "ft_print_memory.c"
#include "stdio.h"

int main()
{
	char *jose = "hello mth";
	ft_print_memory(&jose, 10);
	printf("\n%p", &jose);
}
