/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:38:16 by gamaral           #+#    #+#             */
/*   Updated: 2025/10/11 13:07:19 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h> 

void	ft_initialize(char *digits, int n)
{
	int	l;

	l = 0;
	while (l < n)
	{
		digits[l] = '0' + l;
		l++;
	}
}

void	ft_next(char *digits, int n)
{
	int	l;

	l = 0;
	if (n == 1)
	{
		return ;
	}
	while (1)
	{
		l++;
		if (digits[n - 1 - l] != '9' - l)
		{
			break ;
		}
	}
	digits[n - 1 - l] += 1;
	while (l > 0)
	{
		digits[n - 1 - l + 1] = digits[n - 1 - l] + 1;
		l--;
	}
}

void	ft_print_combn(int n)
{
	int		l;
	char	digits[10];

	ft_initialize(digits, n);
	while (1)
	{
		l = 0;
		while (l < n)
		{
			write(1, &digits[l], 1);
			l++;
		}
		if (digits[0] == '9' - n + 1)
		{
			break ;
		}
		write(1, ", ", 2);
		if (digits[n - 1] == '9')
		{
			ft_next(digits, n);
			digits[n - 1]-- ;
		}
		digits[n - 1] = digits[n - 1] + 1;
	}
}
/*
int	main(void)
{
	ft_print_combn(2);
	return (0);
}*/
