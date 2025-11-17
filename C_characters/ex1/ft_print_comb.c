/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 13:59:35 by gamaral           #+#    #+#             */
/*   Updated: 2025/10/09 14:50:58 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ad_print_space(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ad_print_numbers(char a, char b, char c)
{
	ft_putchar (a);
	ft_putchar (b);
	ft_putchar (c);
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	while (c <= '9')
	{
		d = c + 1;
		while (d <= '9')
		{
			u = d + 1;
			while (u <= '9')
			{
				ad_print_numbers(c, d, u);
				if (!(c == '7' && d == '8' && u == '9'))
				{
					ad_print_space();
				}
				u++;
			}
			d++;
		}
		c++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
