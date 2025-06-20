/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Library_software.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 14:35:09 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/06/18 18:16:40 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRARY_SOFTWARE_H
#define LIBRARY_SOFTWARE_H

# include <stddef.h>
# include "libft.h"

typedef struct	t_book
{
	int		book_id;
	char	*title;
	char	*author;
}				s_book;

int		load_and_fill_catalogue(const char *filename, t_book *books, int max_books);
t_book  create_book(int id, const char *title, const char *author);
void    search_books_by_title(t_book books[], int count, const char *substr);
void    search_books_by_author(t_book books[], int count, const char *substr);
int		ft_strncasecmp(char *str1, char *str2, size_t n);
int     str_case_insensitive_match(const char *search, const char *in_catalogue);

#endif