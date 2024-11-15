/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miovu <miovu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:26:02 by miovu             #+#    #+#             */
/*   Updated: 2024/08/27 15:48:22 by miovu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' )
		{
			str[i] = str[i] -32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "abcd";

	ft_strupcase (str);
	printf("%s\n", str);
	return (0);
}*/