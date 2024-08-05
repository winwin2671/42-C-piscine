/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teasavat <teeraasasav@gamil.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:25:05 by teasavat          #+#    #+#             */
/*   Updated: 2024/07/30 09:39:47 by teasavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	ans;

	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	ans = ((unsigned char) *s1 - (unsigned char) *s2);
	return (ans);
}

void	sort_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < argc)
	{
		j = i;
		while (j > 0)
		{
			if (ft_strcmp(argv[j - 1], argv[j]) > 0)
			{
				tmp = argv[j - 1];
				argv[j - 1] = argv[j];
				argv[j] = tmp;
			}
			j--;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc > 1)
	{
		sort_params(argc - 1, argv + 1);
		i = 1;
		while (i < argc)
		{
			ft_putstr(argv[i]);
			ft_putstr("\n");
			i++;
		}
	}
	return (0);
}
