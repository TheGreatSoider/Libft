#include "libft.h"

int ft_lstsize(t_list *lst)
{
	unsigned int	i;

	i = 0;
	while (lst != '\0')
	{
		lst = lst -> next
		i++;
	}
	return (i);
}