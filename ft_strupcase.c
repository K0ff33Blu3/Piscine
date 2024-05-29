#include <stdio.h>
char	*ft_strupcase(char *str)
{
	int	i;
	char	buffer;

	i = 0;
	while(str[i] != 0)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}
	return str;
}

int	main()
{
	char result[] = "sono fantastica";
	printf("%s", ft_strupcase(result));
	return 0;
}