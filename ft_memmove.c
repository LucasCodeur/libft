#include <stdlib.h>
#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    // unsigned char *p_dest;
    // unsigned char *p_src;
    unsigned char *temp;

    // p_dest = (unsigned char *)dest;
    // p_src = (unsigned char *)src;
    temp = malloc(ft_strlen(src));
    if (!temp)
        return (temp);
    ft_memcpy(temp, src, n);
    ft_memcpy(dest, temp, n);
    return (dest);
}
