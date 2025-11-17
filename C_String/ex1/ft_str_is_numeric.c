/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:16:12 by gamaral           #+#    #+#             */
/*   Updated: 2025/10/22 14:50:36 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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
	value = ft_str_is_numeric("Brasilllllll");
	printf ("Value: %d\n", value);
	value = ft_str_is_numeric("42iargentina");
	printf("Value: %d\n", value);
	return (0);
}*/
