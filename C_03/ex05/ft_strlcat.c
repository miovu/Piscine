/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miovu <miovu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:41:53 by miovu             #+#    #+#             */
/*   Updated: 2024/08/29 17:09:41 by miovu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dcount;

	i = 0;
	j = 0;
	dcount = 0;
	while (dest[i] != '\0')
		i++;
	while (src[dcount] != '\0')
		dcount++;
	if (size <= i)
		dcount += size;
	else
		dcount += i;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dcount);
}

/* int main(void)
{
	char str1[] = "Sweet";
	char str2 [] = "Disposition";
	unsigned int	size;
	
	size = sizeof(str1);
	printf("%d\n", ft_strlcat(str1, str2, size));
	printf("Result: %s %s\n", str1, str2);
	return (0);
} */