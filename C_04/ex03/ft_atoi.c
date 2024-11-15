/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miovu <miovu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:02:51 by miovu             #+#    #+#             */
/*   Updated: 2024/09/01 22:47:30 by miovu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_whitespace(char c)
{
	if ((c >= 9 && c <= 13) || (c == 32))
		return (1);
	return (0);
}

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nbr;

	i = 0;
	sign = 0;
	nbr = 0;
	while (str[i] != '\0' && is_whitespace(str[i]))
		i++;
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] != '\0' && is_digit(str[i]))
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	if (sign % 2 != 0)
		return (-nbr);
	return (nbr);
}

/* int	main(void)
{
	char str[] = "   --++---1234chewihi15";
	printf ("%d", ft_atoi(str));
	return (0);
} */
