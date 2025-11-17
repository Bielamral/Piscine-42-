/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:04:50 by gamaral           #+#    #+#             */
/*   Updated: 2025/10/23 14:31:19 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

void	ft_nbr(int a)
{
	printf(" %i,", a);
}

int	main(void)
{
	int	tab[3] = {3, 65, 2};

	ft_foreach(tab, 3, ft_nbr);
}
