/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miovu <miovu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:16:26 by miovu             #+#    #+#             */
/*   Updated: 2024/08/29 17:02:13 by miovu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (!(s1[i] == '\0' && s2[i] == '\0') && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/* int main(void)
{
	char str1[] = "Helloooo!";
	char str2[] = "Hell";

	printf("First string: %s\n", str1);
	printf("Second string: %s\n", str2);
	printf("Return value of strcmp: %d\n", ft_strcmp(str1, str2));
	return (0);
} */