/*#include<stdio.h>
#include<string.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	count2;

	count = 0;
	count2 = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[count2] != '\0')
	{
		dest[count + count2] = src[count2];
		count2++;
	}
	dest[count + count2] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[30] = "Hey";
	char	src[] = " Vicius";

	ft_strcat(dest, src);
	printf("%s\n", dest);
	return(0);
}
*/
