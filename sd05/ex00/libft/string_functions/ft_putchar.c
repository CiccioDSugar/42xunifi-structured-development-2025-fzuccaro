/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:09:23 by lemarino          #+#    #+#             */
/*   Updated: 2025/06/20 10:41:40 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Writes a single character to the standard output (stdout).
 *
 * Outputs the character 'c' to the standard output (file descriptor 1)
 * using the write system call.
 *
 * @param c The character to write.
 * @return int The number of bytes written (always 1).
 */
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
