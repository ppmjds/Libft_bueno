#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c);

int	main(void)
{
	int	c;

	c = 'z';
	printf("isalpha = %d\n", isalpha(c));
	printf("ft_isalpha = %d\n", ft_isalpha(c));
	return (0);
}
