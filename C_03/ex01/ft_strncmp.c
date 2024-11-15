/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miovu <miovu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 20:43:53 by miovu             #+#    #+#             */
/*   Updated: 2024/09/01 14:52:23 by miovu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/* int main(void)
{
	char str1[] = "Hellooo!";
	char str2[] = "Hell";
	int 	x;

	x  = 5;
	printf("First string: %s\n", str1);
	printf("Second string: %s\n", str2);
	printf("Return value of strcmp: %d\n", ft_strncmp(str1, str2, x));
	return (0);
} */