/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeroual <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 15:47:34 by mzeroual          #+#    #+#             */
/*   Updated: 2022/03/26 09:44:24 by mzeroual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = -1;
	while (i < 98)
	{
		i++;
		j = i;
		while (j < 99)
		{
			j++;
			ft_putchar(48 + i / 10);
			ft_putchar(48 + i % 10);
			write(1, " ", 1);
			ft_putchar(48 + j / 10);
			ft_putchar(48 + j % 10);
			if (i != 98)
				write(1, ", ", 2);
		}
	}
}
