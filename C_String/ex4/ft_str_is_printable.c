/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 22:05:01 by gamaral           #+#    #+#             */
/*   Updated: 2025/10/19 17:49:15 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	value;

	value = 0;
	value = ft_str_is_printable("gabriel!!");
	printf ("Value: %d\n", value);
	value = ft_str_is_printable("997979");
	printf ("Value: %d\n", value);
	value = ft_str_is_printable("i(*% fuck you");
	printf ("Value: %d\n", value);
	return (0);
}*/
