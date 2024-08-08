/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teasavat <teeraasasav@gamil.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:11:52 by teasavat          #+#    #+#             */
/*   Updated: 2024/08/01 11:21:25 by teasavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int	i;
	int	k;

	i = 0;
	k = ft_strlen(src);
	ptr = ((char *)malloc(k * sizeof(src) + 1));
	if (ptr == NULL)
		return (ptr);
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int	i;
	t_stock_str	*tab;

	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	i = 0;
	if (tab == NULL)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].copy = ft_strdup(av[i]);
		tab[i].str = av[i];
		i++;
	}
	tab[i].str = 0;
	return (tab);
}

/*#include <stdio.h> 
int    main(int argc, char *argv[])
{
    t_stock_str    *stock;

    if (argc > 1)
    {
        stock = ft_strs_to_tab(argc - 1, ++argv);
        while (stock->str)
        {
            printf("str: %s\n", stock->str);
            printf("copy: %s\n", stock->copy);
            printf("size: %d\n", stock->size);
            stock++;
            printf("\n");
        }
    }
    printf("\n");
    return (0);
}*/
