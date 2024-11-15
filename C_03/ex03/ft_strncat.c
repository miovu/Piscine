/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miovu <miovu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:55:56 by miovu             #+#    #+#             */
/*   Updated: 2024/08/29 17:07:03 by miovu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*j;

	j = dest;
	while (*j != '\0')
	{
		j++;
	}
	while (*src && nb--)
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
	char str2[] = "Dispositionnnnnnnnn";
	
	printf("The Temper Trap - %s\n", ft_strncat(str1, str2, 11));
	return (0);
} */