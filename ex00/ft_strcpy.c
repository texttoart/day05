/*#include <string.h>*/
char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
	src[count] = dest[count];
	count = count + 1;
	}
	dest[count] = src [count];
	return (dest);
}
/*
int main(void)
{
	char src[] = "Hello";
	char dest[] = "aurevoir";
	printf("src = %s, dest = %s\n", src, dest);
	ft_strcpy(dest, src);
	printf("src = %s, dest = %s\n", src, dest);
	return (0);
}
*/
