/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 15:09:31 by gamaral           #+#    #+#             */
/*   Updated: 2025/10/11 17:07:25 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	merde;
	int	i;

	merde = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		merde *= i;
		i++;
	}
	return (merde);
}
/*
int	main(void)
{
	int	nb;

	nb = 5;
	printf("Factorial: %d\n", ft_iterative_factorial(nb));
	return (0);
}*/
