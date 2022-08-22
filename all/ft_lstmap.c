/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocheong <cocheong@student.42kl.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 22:46:04 by cocheong          #+#    #+#             */
/*   Updated: 2022/08/20 22:50:50 by cocheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Lst0 lst1 lst2 lst3 lst4
//Nl0 Nl1 Nl2 Nl3 Nl4

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
// t_list	*t;
	(void)(*del);
	(void)(*f);
// 	t_list	*nl;

// 	if (lst == '\0')
// 		return ('\0');
// 	t = ft_lstnew((*f)(lst->content));
// 	if (t == '\0')
// 	{
// 		ft_lstclear();
// 	}
// 	(void)(*del);
	return (lst);
}