/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:24:53 by lemarino          #+#    #+#             */
/*   Updated: 2025/06/20 10:41:40 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Checks whether a character is an alphabetic letter.
 *
 * Returns 1 if the character 'c' is a letter (either uppercase or lowercase),
 * and 0 otherwise.
 *
 * @param c The character to check, represented as an integer.
 * @return int 1 if 'c' is an alphabetic letter, 0 otherwise.
 */
int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*int	main(void)
{
	printf("%d",ft_isalpha(8));
}*/
