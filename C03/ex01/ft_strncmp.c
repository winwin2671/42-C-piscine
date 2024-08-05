/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teasavat <teeraasasav@gamil.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:17:08 by teasavat          #+#    #+#             */
/*   Updated: 2024/07/29 10:42:51 by teasavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		if (i < (n - 1))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}

/*int	main(void)
{
	char s1[] = "Hello";
	char s2[] = "Helloo";

	printf("%i\n",ft_strncmp(s1, s2, 6));
	return (0);
}*/
