#include <libft.h>

void ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = ft_strlen(s);
	if (s == 0)
		return (NULL);
	write (fd, s, i);
}