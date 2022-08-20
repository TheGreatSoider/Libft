#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;
	int	j;

	i = ft_strlen(s);
	j = 0;
	if (s != '\0' && f != '\0')
	{
		while (j < i)
		{
			(*f)(j, s);
			j++;
			s++;
		}
	}
}