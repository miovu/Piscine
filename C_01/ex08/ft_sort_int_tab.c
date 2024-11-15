/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miovu <miovu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:26:02 by miovu             #+#    #+#             */
/*   Updated: 2024/08/23 00:08:08 by miovu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab [j] > tab[j + 1])
			{
				temp = tab [j];
				tab [j] = tab [j + 1];
				tab [j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

/*int     main(void)
{
        int arr[5] = {4, 3, 2, 1, 0};
        ft_sort_int_tab(&arr[0], 5);
        int x = 0;
        while(x <= 4)
        {
            printf("%d", arr[x]);
            x++;
        }
        return 0;
}*/
