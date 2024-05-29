/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 09:02:26 by miricci           #+#    #+#             */
/*   Updated: 2024/05/20 10:23:30 by miricci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen(src);
	i = 0;
	while (i <= len)
	{
		if (i < len)
			dest[i] = src[i];
		if (i == len)
			dest[i] = '\0';
		i++;
	}
	return (dest);
}
//
//int	main(void)
//{
//	char	*test;
//	char	dest[] = {'\0'};
//	char	src[11] = "10a";
//	test = ft_strcpy(dest, src);
//	return (0);
//}
