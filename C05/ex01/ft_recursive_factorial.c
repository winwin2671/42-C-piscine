/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teasavat <teeraasasav@gamil.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:06:27 by teasavat          #+#    #+#             */
/*   Updated: 2024/07/24 16:26:33 by teasavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb == '\0' || !(nb >= 0))
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*int	main(void)
{
	int nb = 'a';
	printf("%i\n", ft_recursive_factorial(nb));
	return (0);
}*/
