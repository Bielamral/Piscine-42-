/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:02:33 by gamaral           #+#    #+#             */
/*   Updated: 2025/10/16 16:27:24 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i -1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	i;
	int	tab[20];
	int	tab2[20];

	tab[0] = 15;
	tab[1] = -12;
	tab[2] = 3;
	tab[3] = 7;
	tab[4] = 89;
	tab[5] = -191;
	tab[6] = 0;
	tab[7] = 90;
	tab[8] = 18;
	tab[9] = 843;
	tab[10] = 1000;
	tab[11] = 102289;
	tab[12] = 13;
	tab[13] = 78;
	tab[14] = 789;
	tab[15] = 777;
	tab[16] = 778;
	tab[17] = 9919191;
	tab[18] = 11;
	tab[19] = -406;
	i = 0;
	while (i < 20)
	{
		tab[20] = tab2[20];
		i++;
	}
	ft_sort_int_tab(tab, 20);
	i = 0;
	while (i < 20)
	{
		printf("%d: %d\n", i, tab[i]);
		i++;
	}
}
*/
