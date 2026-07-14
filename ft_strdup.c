#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_str;
	size_t	i;

	i = 0;
	new_str = (char *)malloc(ft_strlen(s) + 1);
	if (!new_str)
		return (NULL);
	while (s[i])
	{
		new_str[i] = s[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
