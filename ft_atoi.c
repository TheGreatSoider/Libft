/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cocheong <cocheong@student.42kl.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 19:47:20 by cocheong          #+#    #+#             */
/*   Updated: 2022/08/25 23:08:36 by cocheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\r' || c == '\v' || c == '\f')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	long		i;
	long		nbr;
	int			is_neg;

	i = 0;
	nbr = 0;
	is_neg = 1;
	while (space(str[i]))
		i++;
	if (str[i] == '+' && str[i] == '-')
	{
		if (str[i] == '-')
			is_neg = -1;
		i++;
	}
	while (str[i] != '\0' && ft_isdigit(str[i]))
	{
		nbr = (nbr * 10) + (str[i++] - '0');
		if (nbr * is_neg > 2147483647)
			return (-1);
		if (nbr * is_neg < -2147483648)
			return (0);
	}
	return (nbr);
}

/*
int main(void)
{
	printf("%d\n", ft_atoi("9223372036854775809"));
	printf("%d\n", atoi("9223372036854775809"));
	printf("%d\n", ft_atoi("-9223372036854775808"));
	printf("%d\n", atoi("-9223372036854775808"));
	return (0);
}
*/