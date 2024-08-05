/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teasavat <teeraasasav@gamil.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:11:55 by teasavat          #+#    #+#             */
/*   Updated: 2024/07/17 13:56:48 by teasavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	str_len;
	int	src_len;

	src_len = ft_strlen(src);
	str_len = 0;
	while (str_len <= src_len)
	{
		dest[str_len] = src[str_len];
		str_len++;
	}
	return (dest);
}

/*int	main(void)
{
	char dest[13] = "a";
	char src[13] = "b";

	ft_strcpy(dest, src);
	
	printf("%s\n", dest);
}*/
