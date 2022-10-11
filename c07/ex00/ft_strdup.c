/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeroual <mzeroual@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 20:48:40 by mzeroual          #+#    #+#             */
/*   Updated: 2022/04/12 19:58:32 by mzeroual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*t;

	i = 0;
	while (src[i] != '\0')
		i++;
	t = malloc(i * sizeof(char) + 1);
	if (!t)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		t[i] = src[i];
		i++;
	}
	t[i] = 0;
	return (t);
}
