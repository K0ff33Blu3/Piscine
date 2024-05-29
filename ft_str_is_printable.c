/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:51:48 by miricci           #+#    #+#             */
/*   Updated: 2024/05/20 19:00:00 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

int	ft_str_is_printable(char *str)
{
	unsigned int	i;
	unsigned int	len;

	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("%d", ft_str_is_printable(""));
	return 0;
}
