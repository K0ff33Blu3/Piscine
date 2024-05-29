/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miricci <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:55:05 by miricci           #+#    #+#             */
/*   Updated: 2024/05/20 15:55:01 by miricci          ###   ########.fr       */
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

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;
	unsigned int	len;

	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		if (!(str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
			return (0);
		i++;
	}
	return (1);
}
//
//int	main(void)
//{
//	printf("%d", ft_str_is_alpha("uicvyjnvgu"));
//	return 0;
//}
