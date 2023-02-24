/*#include <stdio.h>*/

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			str[count] -= 32;
		}
			count++;
	}
	return (str);
}
/*
int main(void)
{
	char str[] = "petit";
	printf("Avant : %s\n", str);
	ft_strupcase(str);
	printf("Apres : %s\n", str);
	return 0;
}
*/
