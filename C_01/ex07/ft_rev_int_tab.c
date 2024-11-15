/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miovu <miovu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:26:02 by miovu             #+#    #+#             */
/*   Updated: 2024/08/21 17:03:15 by miovu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		a;
	int		swap;

	a = 0;
	while (a < (size / 2))
	{
		swap = tab[a];
		tab[a] = tab[size - 1 - a];
		tab[size - 1 - a] = swap;
		a++;
	}
}

/*int	main(void)
{
	int		arr[5] = {1, 2, 3, 4, 5};
	int		i;

	ft_rev_int_tab(&arr[0], 5);
	i = 0;
	while (i <= 4)
	{
		printf("%d", arr[i]);
		i++;
	}
	return (0);
}*/
