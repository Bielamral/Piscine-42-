/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:49:24 by gamaral           #+#    #+#             */
/*   Updated: 2025/10/15 17:48:20 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	start;
	int	end;

	start = 0;
	end = size -1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}
/*
int	main(void)
{
	int	string[] = {0, 1, 2, 3, 4, 5};
	int	size;
	int	i;

	i = 0;
	size = 6;
	ft_rev_int_tab(string, size);
	while (i < size)
	{
		printf("%d", string[i]);
		i++;
	}
	return (0);
}*/
