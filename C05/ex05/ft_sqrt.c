/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teasavat <teeraasasav@gamil.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:56:31 by teasavat          #+#    #+#             */
/*   Updated: 2024/07/29 12:31:00 by teasavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	ans;

	if (nb < 0)
		return (0);
	while (nb >= 0)
	{
		ans = 0;
		while (ans * ans < nb)
			ans++;
		if (ans * ans == nb)
			return (ans);
		if (ans * ans > nb)
			return (0);
	}
	return (0);
}

/*int	main(void)
{
	int nb = 8;

	printf("%i\n", ft_sqrt(nb));
	return (0);
}*/
