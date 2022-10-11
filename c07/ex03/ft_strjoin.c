/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeroual <mzeroual@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:37:57 by mzeroual          #+#    #+#             */
/*   Updated: 2022/04/13 17:34:09 by mzeroual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	int		j;
	char	*p;

	k = 0;
	p = malloc(sizeof(strs));
	i = 0;
	while (k < size)
	{
		j = 0;
		while (strs[k][j])
		{
			p[i++] = strs[k][j];
			j++;
		}
		j = 0;
		while (sep[j] != 0 && k != size - 1)
		{
			p[i++] = sep[j++];
		}
		k++;
	}
	p[i] = 0;
	return (p);
}
