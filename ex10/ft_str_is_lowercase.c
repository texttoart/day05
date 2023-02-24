/*#include<stdio.h>
#include<string.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
	i = i + 1;
	}
	return (1);
}
/*int main(void)
{
	char *str1 = "hello";
	char *str2 = "Hello";
	char *str3 = "";

	printf("result str1 %d\n", ft_str_is_lowercase(str1));
	printf("result str2 %d\n", ft_str_is_lowercase(str2));
	printf("result str3 %d\n", ft_str_is_lowercase(str3));
	return 0;
}*/
