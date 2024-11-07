/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam <marvin@42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:12:15 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/07 20:08:23 by lud-adam         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned char *p;
	
	p = (unsigned char *)pointer;
	while (count--)
		*p++ = value;		
	return (pointer);
}

// void *ft_memset(void *pointer, int value, size_t count) {
//     unsigned char *p = (unsigned char *)pointer;
//     unsigned char v = (unsigned char)value;

//     // Process 2 bytes at a time
//     while (count >= 2) {
//         *p++ = v;
//         *p++ = v;
//         count -= 2;
//     }

//     // Handle any remaining byte
//     if (count > 0) {
//         *p = v;
//     }

//     return pointer;
// }

// #include <stdint.h>

// void *ft_memset(void *pointer, int value, size_t count) {
//     unsigned char *p = (unsigned char *)pointer;
//     uint32_t val = (unsigned char)value; // Ensure the value fits in one byte
//     val |= (val << 8);  // replicate value to 2 bytes
//     val |= (val << 16); // replicate value to 4 bytes
    
//     // Set 4 bytes at a time
//     while (count >= 4) {
//         *(uint32_t *)p = val;  // Set 4 bytes in one go
//         p += 4;
//         count -= 4;
//     }

//     // If there are fewer than 4 bytes remaining, fill them one by one
//     while (count--) {
//         *p++ = (unsigned char)value;
//     }
    
//     return pointer;
// }
