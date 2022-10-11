/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeroual <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:04:09 by mzeroual          #+#    #+#             */
/*   Updated: 2022/03/31 20:25:02 by mzeroual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


 unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	
	}
	dest[i + j] = '\0';
	printf("%s",dest);
	return (j);
}

