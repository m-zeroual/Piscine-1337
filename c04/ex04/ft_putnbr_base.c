/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeroual <mzeroual@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:31:15 by mzeroual          #+#    #+#             */
/*   Updated: 2022/04/09 16:01:22 by mzeroual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	error(char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = ft_strlen(str);
	if (str[0] == '\0' || k == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 45)
			return (0);
		j = i + 1;
		while (j < ft_strlen(str))
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	j;
	int	nb;

	i = error(base);
	j = ft_strlen(base);
	nb = nbr;
	if (i == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		if (nb < j)
			ft_putchar(base[nb]);
		if (nb >= j)
		{
			ft_putnbr_base(nb / j, base);
			ft_putnbr_base(nb % j, base);
		}
	}
}
