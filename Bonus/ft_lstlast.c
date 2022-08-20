#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if (lst->next == '\0')
		return (lst);
	while (lst->next != '\0')
		lst = lst->next;
	return (lst);
}