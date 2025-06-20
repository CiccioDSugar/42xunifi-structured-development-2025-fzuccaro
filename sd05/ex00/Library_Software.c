/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Library_Software.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:44:41 by lemarino          #+#    #+#             */
/*   Updated: 2025/06/20 11:02:50 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Library_Software.h"

static void    free_library(t_book *books)
{
    t_book  *tmp;
    while (books)
    {
        tmp = books-> next_book;
        free(books->author);
        free(books->book_id);
        free(books->title);
        free(books);
        books = tmp;
    }
    tmp = NULL;
}

int main(int ac, char **av)
{
    int     fd;
    t_book  *books;

    books = NULL;
    if (ac != 2)
        return -1;
    fd = open(av[1], O_RDONLY);
    if (fd < 0 || !ft_check_file(av[1]))
        return -1;
    books = ft_calloc(sizeof (t_book), 1);
    if (!books)
        return (close(fd), -1);
    data_init(books);
    if (load_and_fill_catalogue(fd, books))
        ft_handle_terminal_input(books);
    free_library(books);
}
