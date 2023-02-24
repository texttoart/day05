/*#include <stdio.h>
#include <string.h>*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
/*int main(void)
{
    char str1[] = "Bonjour Monde!";
    char str2[] = "un AUTRE exemple 123";

    // Test de ft_strlowcase
    printf("Avant ft_strlowcase : %s\n", str1);
    ft_strlowcase(str1);
    printf("Apres ft_strlowcase : %s\n", str1);

    printf("Avant ft_strlowcase : %s\n", str2);
    ft_strlowcase(str2);
    printf("Apres ft_strlowcase : %s\n", str2);

    return (0);
}*/
