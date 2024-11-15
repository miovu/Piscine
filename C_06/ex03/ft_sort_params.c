/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miovu <miovu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:03:07 by miovu             #+#    #+#             */
/*   Updated: 2024/09/03 15:31:57 by miovu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *str1, char *str2)
{
	int		i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(char **str1, char **str2)
{
	char	*n;

	n = *str1;
	*str1 = *str2;
	*str2 = n;
}

int	main(int argc, char **argv)
{
	int		n;
	int		i;
	int		j;

	n = 1;
	while (n < argc - 1)
	{
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				ft_swap(&argv[i], &argv[i + 1]);
			i++;
		}
		n++;
	}
	j = 1;
	while (j < argc)
	{
		putstr(argv[j]);
		putstr("\n");
		j++;
	}
	return (0);
}
