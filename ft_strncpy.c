/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:26:51 by miricci           #+#    #+#             */
/*   Updated: 2024/05/20 12:28:21 by miricci          ###   ########.fr       */
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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen(src);
	i = 0;
	while (i < n && src[i] != '\0')
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
//	char	src[11] = "Hello World";
//	test = ft_strncpy(dest, src, 10);
//	return (0);
//}
