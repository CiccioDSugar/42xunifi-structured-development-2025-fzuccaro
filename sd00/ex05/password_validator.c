/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   password_validator.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:58:06 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/06/12 17:07:26 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "password_validator.h"

int ft_strlen(const char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

int ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
		i++;
	}
	return (0);

}

int is_special_char(char c) 
{
    if (c == '@' || c == '#' || c == '$' || c == '%' || c == '^' || c == '&' || c == '*')
        return (1);
    return (0);
}

PwStatus    validate_password(const char *new_pw, const char *curr_pw)
{
    char    c;
    int     i;
    int     has_upper;
    int     has_lower;
    int     has_digit;
    int     has_special;

    i = 0;
    has_upper = 0;
    has_lower = 0;
    has_digit = 0;
    has_special = 0;
    
    if (ft_strcmp(new_pw, curr_pw) == 0)
        return (INVALID);
    if (ft_strlen(new_pw) < 8)
        return (INVALID);
    while (new_pw[i] != '\0') 
    {
        c = new_pw[i];
        
        if (c >= 'A' && c <= 'Z')
            has_upper = 1;
        else if (c >= 'a' && c <= 'z')
            has_lower = 1;
        else if (c >= '0' && c <= '9')
            has_digit = 1;
        else if (is_special_char(c)) 
            has_special = 1;
        i++;
    }
    if (has_upper && has_lower && has_digit && has_special)
        return (VALID);
    else 
        return (INVALID);
}
