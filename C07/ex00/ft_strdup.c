/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teasavat <teeraasasav@gamil.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 09:51:02 by teasavat          #+#    #+#             */
/*   Updated: 2024/08/01 10:25:37 by teasavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

char	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;
	int		k;

	i = 0;
	k = ft_strlen(src);
	ptr = ((char *)malloc(k * sizeof(src) + 1));
	if (ptr == NULL)
		return (ptr);
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*int	main(void)
{
	char src[] = "dafag";
	printf("%s\n", ft_strdup(src));
	return (0);
}*/
