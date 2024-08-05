/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teasavat <teeraasasav@gamil.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:20:49 by teasavat          #+#    #+#             */
/*   Updated: 2024/07/31 14:22:46 by teasavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*arr;
	int		len;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	arr = (int *)malloc(sizeof(len) * len);
	if (range == NULL)
		return (-1);
	i = 0;
	while (i < len)
	{
		arr[i] = min;
		min += 1;
		i++;
	}
	*range = &arr[0];
	return (i);
}

/*int	main(void)
{
	int *range;

	printf("%d", ft_ultimate_range(&range, 1, 5));
	return (0);
}*/
