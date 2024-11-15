/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miovu <miovu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:24:36 by miovu             #+#    #+#             */
/*   Updated: 2024/08/29 17:05:57 by miovu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*j;

	j = dest;
	while (*j != '\0')
	{
		j++;
	}
	while (*src != '\0')
	{
		*j = *src;
		j++;
		src++;
	}
	*j = '\0';
	return (dest);
}

/* int main(void)
{
	char str1[] = "Sweet ";
	char str2[] = "Disposition";

	printf("The Temper Trap - %s\n", ft_strcat(str1, str2));
	return (0);
} */