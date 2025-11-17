/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:42:55 by gamaral           #+#    #+#             */
/*   Updated: 2025/10/21 19:44:57 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	is_printable(char c)
{
	if ((c < '0' || c > '9')
		&& (c < 'A' || c > 'Z')
		&& (c < 'a' || c > 'z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((i != 0 && is_printable (str[i - 1]) == 1)
				|| (i == 0))
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char test[] = "hello, how are you doing? 42words forty-two; fifty+and+one";

	printf("%s\n", ft_strcapitalize(test));
	return (0);
}*/
