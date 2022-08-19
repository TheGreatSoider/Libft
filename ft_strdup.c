#include "libft.h"

char	*ft_strdup(char const *s1)
{
	char	*str;
	size_t	i;

	if (s1 != '\0')
		return (NULL);
	str = (char*)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}