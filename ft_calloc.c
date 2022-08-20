#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*rtn;

	rtn = malloc(size * count);
	if (rtn == '\0')
		return ('\0');
	ft_bzero(rtn, count);
	return (rtn);
}