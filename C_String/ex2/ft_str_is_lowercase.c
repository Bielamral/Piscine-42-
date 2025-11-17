/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 20:16:33 by gamaral           #+#    #+#             */
/*   Updated: 2025/10/20 13:57:04 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	value;

	value = 0;
	value = ft_str_is_lowercase("marseille");
	printf ("Value: %d\n", value);
	value = ft_str_is_lowercase("Marseille");
	printf ("Value: %d\n", value);
	return (0);
}*/
