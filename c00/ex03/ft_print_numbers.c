/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeroual <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:52:27 by mzeroual          #+#    #+#             */
/*   Updated: 2022/03/24 11:54:57 by mzeroual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	a;

	a = '1';
	while (a <= '9')
	{
		write(1, &a, 1);
	a++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
