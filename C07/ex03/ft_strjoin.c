/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teasavat <teeraasasav@gamil.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:37:58 by teasavat          #+#    #+#             */
/*   Updated: 2024/08/01 10:13:25 by teasavat         ###   ########.fr       */
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

int	total_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;
	int	seplen;

	i = 0;
	seplen = ft_strlen(sep);
	len = 0;
	while (i < size)
	{
		len += seplen + ft_strlen(strs[i]);
		i++;
	}
	return (len);
}

char	*ft_strcpy(int size, char **strs, char *sep, char *dest)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			dest[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != (size - 1))
		{
			dest[k++] = sep[j++];
		}
		i++;
	}
	dest[k] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		len;

	if (size == 0)
	{
		dest = (char *)malloc(sizeof(char));
		if (dest)
			dest[0] = '\0';
		return (dest);
	}
	len = total_len(size, strs, sep);
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (0);
	dest = ft_strcpy(size, strs, sep, dest);
	return (dest);
}

/*int	main(void)
{
	char *strs[3] = {"HELLO", "WORLD", "!"};
	char *result = ft_strjoin(3, strs, "_");
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	return (0);
}*/
