#include "libft.h"

int	length(long int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		nb *= -1;
		len++;
	}
	while (n > 0)
	{
		n = (n / 10);
		len++;
	}
	return (len);
}

char *ft_itoa(int n)
{
	char	*str;
	long int	nb;
	size_t		i;

	nb = n;
	i = 0;
	str = (char *)malloc((sizeof(char))*i);
	if (str == 0)
		return (NULL);
	if (nb == 0)
	{
		str[0] = 0;
		return (str);
	}
	if (nb < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (nb > 0 && i < length(n))
	{
		str[i] = 48 + (nb % 10);
		nb = nb / 10;
		i++;
	}
	return (str);
}