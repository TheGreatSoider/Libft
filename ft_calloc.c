/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocheong <cocheong@student.42kl.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 19:47:45 by cocheong          #+#    #+#             */
/*   Updated: 2022/08/24 22:37:37 by cocheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Malloc "012345"
//Calloc "000000"

void	*ft_calloc(size_t count, size_t size)
{
	void	*rtn;
	size_t	i;

	i = size * count;
	if (i == 0 || count != i / size)
		return (NULL);
	rtn = malloc(i);
	if (rtn == 0)
		return (NULL);
	ft_bzero(rtn, i);
	return (rtn);
}
