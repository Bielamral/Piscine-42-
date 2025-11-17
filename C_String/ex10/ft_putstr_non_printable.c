/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:19:07 by gamaral           #+#    #+#             */
/*   Updated: 2025/10/22 20:06:48 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	first;
	char	second;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, "\\", 1);
			first = "0123456789abcdef" [str[i] / 16];
			second = "0123456789abcdef" [str[i] % 16];
			write(1, &first, 1);
			write(1, &second, 1);
		}
		i++;
	}
}
/*
int	main(void)
{
	char	*str;

	str = "Hello\nHow are you ?";
	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	return (0);
}*/
