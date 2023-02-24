/*#include <stdio.h>
#include <string.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0' && s2[count] != '\0')
	{
	count++;
	}
	return (s1[count] - s2[count]);
}
/*
int	main(void)
{
	char	s1[] = "je fait des tests";
	char	s2[] = "je fait des choses";
	int	test;

	test = ft_strcmp(s1, s2);
	printf("ma fonction : %d\n", test);
	printf("La fonction : %d\n", strcmp(s1, s2));
	return (0);
}
*/
