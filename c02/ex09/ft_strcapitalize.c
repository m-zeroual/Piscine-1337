/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeroual <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:33:37 by mzeroual          #+#    #+#             */
/*   Updated: 2022/03/30 18:08:18 by mzeroual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	numeric(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	f;

	i = 0;
	f = 1;
	while (str[i] != '\0')
	{
		if (numeric (str[i]))
		{
			if (f && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			else if (!f && str[i] >= 'A' && str[i] <= 'Z' )
				str[i] = str[i] + 32;
			f = 0;
		}
		else
			f = 1;
		i++;
	}
	return (str);
}
