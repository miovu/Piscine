/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miovu <miovu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:26:02 by miovu             #+#    #+#             */
/*   Updated: 2024/08/25 20:29:17 by miovu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		div;
	int		mod;

	div = (*a / *b);
	mod = (*a % *b);
	*a = div;
	*b = mod;
}

/*int		main(void)
{
		int x;
		int y;

		x = 15;
		y = 7;
		ft_ultimate_div_mod(&x, &y);
        printf("Division result: %d\n", x);
        printf("Modulus result: %d\n", y);
}*/