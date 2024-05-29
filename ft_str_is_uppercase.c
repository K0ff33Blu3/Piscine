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

int	ft_str_is_uppercase(char *str)
{
	unsigned int	i;
	unsigned int	len;

	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		if (!(str[i] >= 65 && str[i] <= 90))
			return (0);
		i++;
	}
	return (1);
}
//
//int	main(void)
//{
//	printf("%d", ft_str_is_uppercase("KHGSBTIUFB"));
//	return 0;
//}
