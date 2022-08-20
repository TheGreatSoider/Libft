#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*t;

	while (lst != '\0')
	{
		t = lst->next;
		ft_lstdelone(*lst, del);
		*lst = t;
	}
}