/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:32:38 by lemarino          #+#    #+#             */
/*   Updated: 2025/06/20 10:41:40 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * @brief Duplicates a null-terminated string by allocating memory.
 *
 * Allocates sufficient memory for a copy of the string 's',
 * copies the content of 's' into the newly allocated memory,
 * and returns a pointer to it.
 *
 * @param s The null-terminated string to duplicate.
 * @return char* Pointer to the duplicated string, or NULL if allocation fails.
 */
char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);
	while (s[j] != '\0')
	{
		ptr[j] = s[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
/*int	main()
{
	const char s[] = "ciao";
	printf("%s", ft_strdup(s));
}*/
