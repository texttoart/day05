/*#include<stdio.h>
#include<string.h>
#include<ctype.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

			i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			return (0);
		}
			i = i + 1;
	}
	return (1);
}
/*
int main(void) {
    char str1[] = "HelloWorld";
    char str2[] = "1234";
    char str3[] = "";
    int res1, res2, res3;
    size_t i;

    // Test ft_str_is_alpha
    res1 = ft_str_is_alpha(str1);
    res2 = ft_str_is_alpha(str2);
    res3 = ft_str_is_alpha(str3);

    printf("ft_str_is_alpha:\n");
    printf("res1=%d, res2=%d, res3=%d\n", res1, res2, res3);

    // Test isalpha
    printf("\nisalpha:\n");
    for (i = 0; i < strlen(str1); i++) {
        printf("isalpha('%c')=%d\n", str1[i], isalpha(str1[i]));
    }
    for (i = 0; i < strlen(str2); i++) {
        printf("isalpha('%c')=%d\n", str2[i], isalpha(str2[i]));
    }
    printf("isalpha('\\0')=%d\n", isalpha('\0'));

    return (0);
}
*/
