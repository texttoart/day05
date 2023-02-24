/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i = i + 1;
	}
	return (1);
}
/*int	main()
{
	char str1[] = "Hello, world!";
	char str2[] = "Hello, \nworld!";
	char str3[] = "Hello, \tworld!";
	char str4[] = "";

	printf("%d\n", ft_str_is_printable(str1));
	printf("%d\n", ft_str_is_printable(str2));
	printf("%d\n", ft_str_is_printable(str3));
	printf("%d\n", ft_str_is_printable(str4));

	return (0);
}*/
