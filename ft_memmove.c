#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char   *d;
    const unsigned char *s;
    size_t  i;
    if (!dest && !src)
        return (NULL);
    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    if (d < s)
    {
        i = 0;
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    else
    {
        while (n > 0)
        {
            n--;
            d[n] = s[n];
        }
    }
    return (dest);
}