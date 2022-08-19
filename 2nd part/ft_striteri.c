void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;
	int	j;
	int	k;

	i = ft_strlen(s);
	j = 0;
	k = 0;
	if (s != '\0' && f != '\0')
	{
		while (j < i)
		{
			(*f)(j, s[a]);
			j++;
			k++;
		}
	}
}