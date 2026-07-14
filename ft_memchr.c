#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (n == '\0')
		return (NULL);
	while (n--)
	{
		if (*(char *)s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
