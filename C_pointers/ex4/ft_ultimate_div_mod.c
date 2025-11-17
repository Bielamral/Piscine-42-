/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:46:14 by gamaral           #+#    #+#             */
/*   Updated: 2025/10/15 14:47:04 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	opa;

	opa = *a;
	*a = *a / *b;
	*b = opa % *b;
}

/*int	 main(void)
{
	int a= 20;
	int b= 6;
	int *div = &a;
	int	*mod = &b;

	ft_ultimate_div_mod(div, mod);

	printf("%d %d", a, b);
	return (0);
}
*/
