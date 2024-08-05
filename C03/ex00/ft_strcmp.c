/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teasavat <teeraasasav@gamil.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:15:52 by teasavat          #+#    #+#             */
/*   Updated: 2024/07/23 10:16:32 by teasavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	ans;

	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	ans = ((unsigned char)*s1 - (unsigned char)*s2);
	return (ans);
}

/*int	main(void)
{
	char s1[] = "zfz";
	char s2[] = "gfg";

	printf("%i\n",ft_strcmp(s1, s2));
	return (0);
}*/
