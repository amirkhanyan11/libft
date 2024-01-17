
int ft_isalpha(int c)
{
	return (_is_upper(c) || _is_lower(c));
}

int ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

int	ft_isascii(int c)
{
	return ((const unsigned int)c <= 127);
}

int ft_isprint(int c)
{
	return ((const unsigned char)c > 31 && (const unsigned char)c < 127);
}
