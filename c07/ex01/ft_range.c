/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeroual <mzeroual@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 00:40:12 by mzeroual          #+#    #+#             */
/*   Updated: 2022/04/13 17:35:28 by mzeroual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*t;

	i = 0;
	t = malloc((max - min) * sizeof(int));
	if (min >= max || !(t))
		return (0);
	while (min < max)
	{
		t[i] = min;
		min++;
		i++;
	}
	return (t);
}
