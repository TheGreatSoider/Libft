/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocheong <cocheong@student.42kl.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 22:11:42 by cocheong          #+#    #+#             */
/*   Updated: 2022/08/20 22:13:06 by cocheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

//s = 0123456789876543210 || 000 11 2 3333 4 5 6666666 7777 88 99999 88888 77 66 54 422 3111 22 11 011
//c = 9 || ' ' && '9'
//

char **ft_split(const char *s, char c)
{
	int		i;
	int 	j;
	char	**str;

	i = 0;
	if (s == 0)
		return ('\0');
	while (s[i] != '\0')
	{
		j = 0;
		if (s[i] != c)
			j++;
		i++;
	}
	str = (char **)malloc(sizeof(char *) * (j + 1));
	if (*str == 0)
		return ('\0');
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] != c)
		{
			*str[j] = s[i];
			j++;
			i++;
		}
		i++;
	}
	return (str);
}

// int main (void)
// {
// 	char	str[] = "Matthew like Jay Chou according to Colin Cheong.";
// 	char	character = ' ';

// 	printf("%s\n", ft_split(str, character)[0]);
// 	return (0);
// }