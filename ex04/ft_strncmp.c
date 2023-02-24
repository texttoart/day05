/*#include <stdio.h>
#include <string.h>*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	count;

	count = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[count] == s2[count] && s1[count] != '\0' && s2[count] != '\0' && count < n - 1)
		count++;
	return (s1[count] - s2[count]);
}
/*
int main(void)
{
	char	s1[] = "Bonjour";
	char	s2[] = "Bonsoir";
	int	n = 10;

	int res = ft_strncmp(s1, s2, n);

	printf("Ma fonction : %d\n", res);
	printf("La fonction : %d\n", strncmp(s1, s2, n));

	return (0);
}
*/
