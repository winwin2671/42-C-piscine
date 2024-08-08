#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H
# include <stdlib.h>

typedef struct	s_stock_str
{
	char 	*str;
	char 	*copy;
	int		size;
} t_stock_str;

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
#endif
