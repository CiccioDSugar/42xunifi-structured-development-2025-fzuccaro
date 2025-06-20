/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:17:00 by lemarino          #+#    #+#             */
/*   Updated: 2025/06/20 10:41:40 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Fills a block of memory with a specific byte value.
 *
 * Sets the first 'n' bytes of the memory area pointed to by 's'
 * to the byte value 'c' (converted to unsigned char).
 *
 * @param s Pointer to the memory area to fill.
 * @param c Byte value to set.
 * @param n Number of bytes to set.
 * @return void* Pointer to the memory area 's'.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*int main()
{
	char	buffer[10];
	int	i = 0;
	ft_memset(buffer, 6, 10);
	while(i < 10)
	{
		printf("%d", buffer[i]);
		i++;
	}
	return (0);
}*/
