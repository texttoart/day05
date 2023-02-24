/*#include <stdio.h>*/

char	*ft_strcapitalize(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (count == 0 || str[count - 1] == ' ')
		{
			if (str[count] >= 'a' && str[count] <= 'z')
			{
				str[count] -= 32;
			}
		}
		else
		{
			if (str[count] >= 'A' && str[count] <= 'Z')
			{
				str[count] += 32;
			}
		}
		count++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "norminette est une conasse";

	printf("avant : %s\n", str);
	ft_strcapitalize(str);
	printf("apres : %s\n", str);
	return (0);
}
*/
