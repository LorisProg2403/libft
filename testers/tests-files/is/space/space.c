#include "../../../../include/libft.h"
#include <ctype.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		if (isspace(ft_atoi(av[1])) == ft_isspace(ft_atoi(av[1])))
			ft_printf("OK\n");
		else
			ft_printf("KO\n");
	}
	else
		ft_printf("KO\n");
}
