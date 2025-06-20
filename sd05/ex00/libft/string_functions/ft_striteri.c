/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:03:26 by lemarino          #+#    #+#             */
/*   Updated: 2025/06/20 10:41:40 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Applies a function to each character of a string, with index.
 *
 * Iterates over the string 's' and applies the function 'f' to each character,
 * passing the current index and a pointer to the character.
 *
 * @param s The null-terminated string to iterate over.
 * @param f The function to apply to each character, which takes the index
 *          and a pointer to the character.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
