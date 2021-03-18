#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(void)
{
	char	s1[] = "bb";
	char	s2[] = "dd";
	size_t	n;
	int	tams1;
	int	tams2;
	unsigned char	*a;
	unsigned char	*b;
	int	sol;

	a = (unsigned char*)s1;
	b = (unsigned char*)s2;
	sol = a - b;
	tams1 = sizeof(a);
	tams2 = sizeof(b);
	printf("sol = %d\n", sol);
	printf("tams1 = %d\n", tams1);
	printf("tams2 = %d\n", tams2);
	n = 2;
	printf("memcmp = %d\n", memcmp(s1, s2, n));
	printf("ft_memcmp = %d\n", ft_memcmp(s1, s2, n));
	return (0);
}
