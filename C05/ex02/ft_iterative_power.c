/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teasavat <teeraasasav@gamil.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:33:23 by teasavat          #+#    #+#             */
/*   Updated: 2024/07/26 18:02:27 by teasavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	ans;

	i = 1;
	ans = 1;
	if (power < 0)
		ans = 0;
	if (power == 0)
		ans = 1;
	while (i <= power)
	{
		ans = ans * nb;
		i++;
	}
	return (ans);
}

/*int	main(void)
{
	int nb = 2;
	int power = 3;

	printf("%i\n", ft_iterative_power(nb, power));
	return (0);
}*/
