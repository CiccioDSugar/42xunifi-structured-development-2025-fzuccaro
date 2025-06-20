/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:10:34 by lemarino          #+#    #+#             */
/*   Updated: 2025/06/20 10:41:40 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Writes a null-terminated string to the specified file descriptor.
 *
 * Outputs the string 's' to the file descriptor 'fd' character by character.
 *
 * @param s The string to write.
 * @param fd The file descriptor to write to.
 * @return int The total number of bytes written.
 */
int	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		count += write(fd, &s[i], 1);
		i++;
	}
	return (count);
}
