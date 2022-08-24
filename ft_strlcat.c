/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocheong <cocheong@student.42kl.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 14:43:28 by cocheong          #+#    #+#             */
/*   Updated: 2022/08/25 04:57:22 by cocheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	char	*buffer;
// 	size_t	i;
// 	size_t	res;

// 	buffer = dst;
// 	i = 0;
// 	res = 0;
// 	while (*buffer)
// 	{
// 		buffer++;
// 		i++;
// 	}
// 	if (i > size)
// 		res = size + ft_strlen(src);
// 	else
// 		res = i + ft_strlen(src);
// 	while (i + 1 < size && *src)
// 	{
// 		*buffer++ = *src++;
// 		i++;
// 	}
// 	*buffer = '\0';
// 	return (res);
// }
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	d;
	size_t	s;

	i = ft_strlen(dest);
	j = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (size < 1)
		return (s + size);
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < d)
		return (s + size);
	else
		return (s + d);
}