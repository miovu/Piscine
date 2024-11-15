/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miovu <miovu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:26:02 by miovu             #+#    #+#             */
/*   Updated: 2024/08/21 19:09:58 by miovu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int		n;

	n = *a;
	*a = *b;
	*b = n;
}

/*nt 	main(void)
{
		int x = 21;
		int y = 42;

		printf("Before swap: %d, %d \n", x, y);
		ft_swap(&x, &y);
		printf("After swap: %d, %d \n", x, y);
		return 0;
}*/