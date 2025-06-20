/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_putnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:57:20 by lemarino          #+#    #+#             */
/*   Updated: 2025/06/20 10:41:40 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Writes an unsigned integer to the given file descriptor.
 *
 * Recursively writes each digit of the unsigned integer to the specified
 * file descriptor.
 *
 * @param n The unsigned integer to write.
 * @param fd The file descriptor where the number will be written.
 * @return The number of characters written.
 */
int	ft_unsigned_putnbr(unsigned int n, int fd)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_putnbr(n / 10);
	n = (n % 10) + 48;
	count += write(fd, &n, 1);
	return (count);
}
