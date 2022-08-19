#include "libft.h"

int	ft_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	a;
	size_t	z;

	a = 0;
	while (s1[a] != '\0' && ft_in_set(s1[a], set) == 0)
		a++;
	z = ft_strlen(s1);
	while (z > a && ft_in_set(s1[z - 1], set) == 0)
		z--;
	str = (char*)malloc(sizeof(*s1) * (z - a + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (a < z)
		str[i++] = s1[a++];
	str[i] = '\0';
	return (str);
}
