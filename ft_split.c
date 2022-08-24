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

#include "libft.h"

//s = 0123456789876543210
//c = 9 
//

char **ft_split(const char *s, char c)
{
	int		i;
	int 	j;
	int		l;
	char	**str;

	i = 0;
	j = 0;
	if (s == 0)
		return ('\0');
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c)
				i++;
			j++;
		}
		i++;
	}
	str = (char **)malloc(sizeof(char *) * (j + 1)); 
	if (*str == 0)
		return ('\0');
	i = 0;
	l = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			j = i;
			while (s[i] != c)
				j++;
			str[l] = malloc(sizeof(char) * (j + 1));
			while (l != j)
				str[++l] = ft_substr(s, i, j);
			str[l] = '\0';
			i = j;
		}
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