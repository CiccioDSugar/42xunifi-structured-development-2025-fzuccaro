/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:12:14 by lemarino          #+#    #+#             */
/*   Updated: 2025/06/20 10:41:40 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Checks whether a character is a whitespace character.
 *
 * Returns 1 if the character 'c' is a whitespace character:
 * space (32), horizontal tab (9), newline (10), vertical tab (11),
 * form feed (12), or carriage return (13). Returns 0 otherwise.
 *
 * @param c The character to check.
 * @return int 1 if 'c' is a whitespace character, 0 otherwise.
 */
int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}
