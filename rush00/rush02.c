/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srussame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 11:23:29 by srussame          #+#    #+#             */
/*   Updated: 2024/07/14 19:52:14 by srussame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	first_line(int x, int y)
{
	int	xt;

	xt = x;
	if (x > 0 && y > 0)
		ft_putchar('A');
	while (xt - 2 > 0 && y > 0)
	{
		ft_putchar('B');
		xt--;
	}
	if (x > 1 && y > 0)
		ft_putchar('A');
}

void	middle_b(int x, int y)
{
	int	xt;

	while (y - 2 > 0 && x > 0)
	{
		ft_putchar('\n');
		ft_putchar('B');
		xt = x;
		while (xt - 2 > 0)
		{
			ft_putchar(' ');
			xt--;
		}
		if (x > 1)
			ft_putchar('B');
		y--;
	}
}

void	last_line(int x, int y)
{
	int	xt;

	xt = x;
	if (y > 1 && x > 0)
	{
		ft_putchar('\n');
		ft_putchar('C');
	}
	while (xt - 2 > 0 && y > 1)
	{
		ft_putchar('B');
		xt--;
	}
	if (x > 1 && y > 1)
		ft_putchar('C');
}

void	rush(int x, int y)
{
	if (x <= 2147483647 && y <= 2147483647)
	{
		if (x < 0 || y < 0)
		{
			write(1, "Error! recieve only positive integer value.", 44);
			return ;
		}
		first_line(x, y);
		middle_b(x, y);
		last_line(x, y);
		return ;
	}
}
