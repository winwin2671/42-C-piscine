/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teasavat <teeraasasav@gamil.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:20:52 by teasavat          #+#    #+#             */
/*   Updated: 2024/07/16 11:38:25 by teasavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	ft_div_mod(18, 4, &div, &mod);

	printf("result: %i\n", div);
	printf("remainder: %i\n", mod);
	return(0);
}*/
