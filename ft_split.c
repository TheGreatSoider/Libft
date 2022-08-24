/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocheong <cocheong@student.42kl.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 22:11:42 by cocheong          #+#    #+#             */
/*   Updated: 2022/08/24 22:36:53 by cocheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//s = 0123456789876543210
//c = 9 
//
//str[0] = 
char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	int		l;
	int		old_i;
	char	**str;

	i = 0;
	j = 0;
	if (s == 0)
		return ('\0');
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != '\0' && s[i] != c)
				i++;
			j++;
		}
		if (s[i] != '\0')
			i++;
	}
	str = (char **)malloc(sizeof(char *) * (j + 1));
	if (str == 0)
		return ('\0');
	i = 0;
	l = 0;
	while (s[i] != '\0')
	{
		j = 0;
		if (s[i] != c)
		{
			old_i = i;
			while (s[i] != '\0' && s[i] != c)
			{
				i++;
				j++;
			}
			str[l] = ft_substr(s, old_i, j);
			l++;
		}
		if (s[i] != '\0')
			i++;
	}
	return (str);
}

// int main (void)
// {
// 	char **sstr;
// 	char	str[] = "Matthew like Jay Chou according to Colin Cheong.";
// 	char	character = ' ';

// 	sstr = ft_split(str, character);
// 	printf("%s\n", sstr[0]);
// 	return (0);
// }