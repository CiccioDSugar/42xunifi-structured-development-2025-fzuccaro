/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:41:37 by lemarino          #+#    #+#             */
/*   Updated: 2025/06/20 10:41:40 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Checks whether a character is alphanumeric.
 *
 * Returns 1 if the character 'c' is either a letter (uppercase or lowercase)
 * or a digit. Returns 0 otherwise.
 *
 * @param c The character to check, represented as an integer.
 * @return int 1 if 'c' is alphanumeric, 0 otherwise.
 */
int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}

/*int	main(void)
{
	printf("%d",ft_isalnum(63));
}*/
