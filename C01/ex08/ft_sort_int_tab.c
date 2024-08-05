/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teasavat <teeraasasav@gamil.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:02:58 by teasavat          #+#    #+#             */
/*   Updated: 2024/07/17 17:46:39 by teasavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;
	int	j;

	i = 0;
	j = i + 1;
	while (tab[i] != '\0')
	{
		j = i + 1;
		while (j <= size - 1)
		{
			if (tab[i] > tab[j])
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
			}
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	int arr[5] = {2, 1, 4, 3, 0};
	ft_sort_int_tab(arr, 5);

	//printf("%d, %d, %d, %d, %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
}*/
