/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

		i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	chaine1[] = "123456";
	char	chaine2[] = "1a2b3c4d5e6f";
	char	chaine3[] = "";
    
	printf("%d\n", ft_str_is_numeric(chaine1));
	printf("%d\n", ft_str_is_numeric(chaine2));
	printf("%d\n", ft_str_is_numeric(chaine3)); 

	return(0);
}
*/
