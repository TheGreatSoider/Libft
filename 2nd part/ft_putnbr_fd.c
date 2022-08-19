#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	i;

	if (n == -2147483648)
		write(fd, "-2147483648");
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = -n
			ft_putnbr_fd(n, fd)
		}
		else if (n < 10)
		{
			i = n + '0';
			write(fd, &i, 1);
		}
		else
		{
			ft_putnbr_fd(n / 10, fd);
			c = (n % 10) + '0';
			write(fd, &i, 1);
		}
	}
}