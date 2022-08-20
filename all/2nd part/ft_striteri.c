/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocheong <cocheong@student.42kl.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 22:11:46 by cocheong          #+#    #+#             */
/*   Updated: 2022/08/20 22:23:51 by cocheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;
	int	j;

	i = ft_strlen(s);
	j = 0;
	if (s != '\0' && f != '\0')
	{
		while (j < i)
		{
			(*f)(j, s);
			j++;
			s++;
		}
	}
}
