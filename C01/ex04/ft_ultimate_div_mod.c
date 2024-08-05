/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teasavat <teeraasasav@gamil.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:55:38 by teasavat          #+#    #+#             */
/*   Updated: 2024/07/16 11:48:47 by teasavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	mod;
	int	div;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int	main(void)
{
	int a = 15;
	int b = 4;
	int result;
	int remainder;

	ft_ultimate_div_mod(&result, &remainder);
	printf("result: %i\n", result);
	printf("remainder: %i\n", remainder);
	return(0);
}*/
