/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teasavat <teeraasasav@gamil.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:41:50 by teasavat          #+#    #+#             */
/*   Updated: 2024/07/24 16:04:55 by teasavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	ans;
	int	i;

	i = 1;
	ans = 1;
	if (nb < 0)
		ans = 0;
	while (i <= nb)
	{
		ans *= i;
		i++;
	}
	return (ans);
}

/*int	main(void)
{
	int	nb;

	nb = 5;
	printf("%i\n", ft_iterative_factorial(nb));
	return (0);
}*/
