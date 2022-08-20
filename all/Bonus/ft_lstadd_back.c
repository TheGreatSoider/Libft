/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocheong <cocheong@student.42kl.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 22:45:35 by cocheong          #+#    #+#             */
/*   Updated: 2022/08/20 22:51:20 by cocheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	unsigned int	i;
	t_list			*t;

	i = 0;
	if (*lst == '\0')
		*lst = new;
	while (i != ft_lstsize(*lst))
	{
		*lst = *lst->next;
		i++;
	}
	t = *lst;
	t->next = new;
}
