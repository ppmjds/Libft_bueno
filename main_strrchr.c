#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c);

int	main(void)
{
	const char 	s[] = "Los_7_magnificos";
	int		c;

	c = 'h';
	printf("strrchr = %s\n", strrchr(s, c));
	printf("ft_strrchr = %s\n", ft_strrchr(s, c));
	return (0);
}
