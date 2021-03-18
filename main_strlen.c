#include <string.h>
#include <stdio.h>

size_t ft_strlen(const char *s);

int	main(void)
{
	const char *s;
       
	s = "Hola Mundo";
	printf("strlen = %ld\n", strlen(s));
	printf("ft_strlen = %ld\n", ft_strlen(s));
	return (0);
}
