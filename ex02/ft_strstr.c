/*#include<stdio.h>*/
#include<string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int	count2;

	count = 0;
	while (str[count] != '\0')
	{
		count2 = 0;
		while (to_find[count2] == str[count + count2])
		{
			if (to_find[count2 + 1] == '\0')
			{
				return (str + count);
			}
			count2++;
		}
		count++;
	}
	return (0);
}
/*
int main(void)
{
	char str[] = "j'en peux plus de cette exo";
	char to_find[] = "j'en peux ps";

	ft_strstr(str, to_find);
	printf("ma fonction : %s\n", ft_strstr(str, to_find));
	printf("la fonction : %s\n", strstr(str, to_find));
}
*/
