/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miovu <miovu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:28:09 by miovu             #+#    #+#             */
/*   Updated: 2024/09/03 15:32:27 by miovu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		len;

	len = 0;
	if (argc > 0)
	{
		while (argv[0][len] != '\0')
			len++;
		write(1, argv[0], len);
		write(1, "\n", 1);
	}
	return (0);
}
