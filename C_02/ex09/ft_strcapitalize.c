/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miovu <miovu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:26:02 by miovu             #+#    #+#             */
/*   Updated: 2024/08/27 15:56:09 by miovu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_up(char a)
{
	if (a >= 'A' && a <= 'Z')
		return (1);
	else
		return (0);
}

int	is_low(char a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	else
		return (0);
}

int	is_nbr(char a)
{
	if (a >= '0' && a <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (is_low(str[i]) && flag == 1)
		{
			str[i] -= 32;
			flag = 0;
		}
		else if (is_up(str[i]) && flag == 0)
			str[i] += 32;
		if (is_low(str[i]) || is_up(str[i]) || is_nbr(str[i]))
			flag = 0;
		else
			flag = 1;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "salut, comMMent tu vas ? 42mots 
	quarante-deux; cinquante+et+un";

	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
}*/