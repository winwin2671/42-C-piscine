/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teasavat <teeraasasav@gamil.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:08:16 by teasavat          #+#    #+#             */
/*   Updated: 2024/07/18 17:12:59 by teasavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && \
		str[i] <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char str[] = "abcdefghij2kl";
	
	int ans = ft_str_is_alpha(str);

	printf("%i\n", ans);

}*/
