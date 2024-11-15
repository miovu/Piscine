/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miovu <miovu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:55:24 by miovu             #+#    #+#             */
/*   Updated: 2024/09/01 16:57:08 by miovu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int		i;

	i = 1;
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}

/* int	main(void)
{
	printf("Square root: %d\n", ft_sqrt(25));
	return (0);
} */