/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:27:47 by gamaral           #+#    #+#             */
/*   Updated: 2025/10/15 14:41:56 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main(void)
{
	int	happy;
	int	sad;

	happy = 10;
	sad = 5;
	ft_swap(&happy, &sad);
	printf ("a = b : %d \n", happy);
	printf ("b = a : %d", sad);
	return (0);
}*/
