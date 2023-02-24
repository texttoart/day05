/*#include <stdio.h>*/
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (src[count] != '\0' && count < n)
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

/*
int main(void)
{
	char src[] = "hey";
	char dest[] = "au revoir";
	//char src1[] = "hey";
	//char dest1[] = "au revoir";
	unsigned int n;

	n = 10;

	printf("src : %s, dest : %s\n", src, dest);
	ft_strncpy(dest, src, n);
	printf("src : %s, dest : %s\n", src, dest);
	return(0);
}
*/
