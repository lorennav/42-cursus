#include "libft.h"

int	ft_putnbr_base(unsigned long n, char *base)
{
	unsigned int	base_len;
	int				n_len;

	n_len = 1;
	base_len = ft_strlen(base);
	if (n == 0)
	{
		write(1, "0", 1);
		return (n_len);
	}
	if (n >= base_len)
	{
		n_len += ft_putnbr_base(n / base_len, base);
		write(1, &base[n % base_len], 1);
	}
	else if (n < base_len)
		write(1, &base[n], 1);
	return (n_len);
}
