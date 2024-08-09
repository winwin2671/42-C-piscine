/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teasavat <teeraasasav@gamil.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 09:41:40 by teasavat          #+#    #+#             */
/*   Updated: 2024/07/16 11:37:19 by teasavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	n;

	n = *a;
	*a = *b;
	*b = n;
}

/*int	main(void)
{
	int a = 0;
	int b = 42;

	ft_swap(&a, &b);

	printf("a = %i\n", a);
	printf("b = %i\n", b);
	return(0);
}*/
