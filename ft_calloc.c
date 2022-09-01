/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocheong <cocheong@student.42kl.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 19:47:45 by cocheong          #+#    #+#             */
/*   Updated: 2022/09/01 16:07:35 by cocheong         ###   ########.fr       */
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
	if (i == 0)
		return (NULL);
	if (count != (i / size))
		return (NULL);
	rtn = malloc(i);
	if (rtn == 0)
		return (NULL);
	ft_bzero(rtn, i);
	return (rtn);
}
