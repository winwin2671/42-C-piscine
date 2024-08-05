/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teasavat <teeraasasav@gamil.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:33:03 by teasavat          #+#    #+#             */
/*   Updated: 2024/07/23 13:41:21 by teasavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (to_find[j] == '\0')
			return (&str[i]);
		if (str[i] == to_find[0])
		{
			while (to_find[j] != '\0')
			{
				if (!(str[i + j] == to_find[j]))
					break ;
				j++;
				if (to_find[j] == '\0')
					return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char str[] = "HeyHelloWorld";
	char to_find[] = "Hello";

	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}*/
