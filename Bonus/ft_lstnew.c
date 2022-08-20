#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *new

	new = malloc(sizeof(t_list));
	if (new == '\0')
	{
		rtn = '\0';
		return (rtn);
	}
	rtn -> next = '\0';
	rtn -> content = content;
}