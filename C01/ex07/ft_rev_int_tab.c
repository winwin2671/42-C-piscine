/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teasavat <teeraasasav@gamil.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:10:49 by teasavat          #+#    #+#             */
/*   Updated: 2024/07/17 09:39:13 by teasavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	num_arr;
	int	swap;

	num_arr = 0;
	while (num_arr < (size / 2))
	{
		swap = tab[num_arr];
		tab[num_arr] = tab[size - 1 - num_arr];
		tab[size - 1 - num_arr] = swap;
		num_arr++;
	}
}

/*int	main(void)
{
	int arr[5] = {0,1,2,3,4};

	ft_rev_int_tab(arr, 5);

	printf("%d, %d, %d, %d, %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	return(0);
}*/
