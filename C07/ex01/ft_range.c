/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teasavat <teeraasasav@gamil.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:56:01 by teasavat          #+#    #+#             */
/*   Updated: 2024/07/31 14:00:32 by teasavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		len;
	int		*ptr;

	if (min >= max)
		return (NULL);
	len = max - min;
	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}

/*int	main(void)
{
	printf("%d", ft_range(0, 10));
	return (0);
}*/
