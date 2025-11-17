/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:51:21 by gamaral           #+#    #+#             */
/*   Updated: 2025/10/18 22:03:40 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
	value = ft_str_is_uppercase("GABRIEL");
	printf ("Value: %d\n", value);
	value = ft_str_is_uppercase("gabriel");
	printf ("Value: %d\n", value);
	return (0);
}
*/
