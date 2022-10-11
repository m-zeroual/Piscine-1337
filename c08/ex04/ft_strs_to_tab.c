/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeroual <mzeroual@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 00:24:43 by mzeroual          #+#    #+#             */
/*   Updated: 2022/04/12 20:50:43 by mzeroual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	int		len;
	char	*copy;

	len = ft_strlen(str);
	copy = (char *)malloc((len + 1) * sizeof(char));
	if (!copy)
		return (0);
	i = 0;
	while (i < len)
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*ob;
	int			i;

	i = 0;
	ob = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!ob)
		return (0);
	while (i < ac && av)
	{
		ob[i].size = ft_strlen(av[i]);
		ob[i].str = av[i];
		ob[i].copy = ft_strdup(av[i]);
		i++;
	}
	ob[i].str = 0;
	ob[i].copy = 0;
	return (ob);
}
