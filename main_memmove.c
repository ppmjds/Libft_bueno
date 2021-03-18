#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

int	main(void)
{
	char	dest[] = "Los_7";
	char	src[] = "Hola*Mundo";
	char	*memm;
//	char	*sol;
	size_t	n;

	n = 5;

	memm = memmove(dest, src, n);
	printf("memmove = %s\n", memm);
//	sol = ft_memmove(dest, src, n);
//	printf("ft_memmove = %s\n", sol);
	return(0);
}
