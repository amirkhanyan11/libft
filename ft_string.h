
size_t	ft_strlen(const char *str)
{
	size_t	len;

	if (str == 0)
		return (0);
	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_strchr(const char *str, int c)
{
	return ((char *)ft_memchr(str, c, ft_strlen(str) + 1));
}

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	if (str == 0 || !ft_isascii(c))
		return (0);
	i = (ft_strlen(str) - 1);
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)(str + i));
		i--;
	}
	return (0);
}

int	ft_toupper(int c)
{
	if (_is_lower(c))
		c -= 'a';
	return (c);
}

int ft_tolower(int c)
{
	if (_is_upper(c))
		c += 'a';
	return (c);
}

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	if (str1 == 0 || str2 == 0 || n == 0)
		return (0);
	while (*str1 && n > 1)
	{
		if (*str1 != *str2)
			break ;
		str1++;
		str2++;
		n--;
	}
	return ((const unsigned char)*str1 - (const unsigned char)*str2);
}

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	if (b == 0 || len == 0)
		return (b);
	i = 0;
	str = (unsigned char*)b;
	while(str[i] && i < len)
	{
		str[i++] = (unsigned char)c;
	}
	return (b);
}

void	ft_bzero(void *s, size_t n)
{
	s = ft_memset(s, 0, n);
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;
	if (s == 0 || !ft_isascii(c))
		return (0);
	i = 0;
	str = (const char *)s;
	while (str[i] && i < n)
	{
		if (str[i] == c)
			return ((char *)(str + i));
		i++;
	}
	return (0);
}

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	return (ft_strncmp((const char *)s1, (const char *)s2, n));
}

