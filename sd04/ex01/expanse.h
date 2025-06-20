/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expanse.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 11:34:44 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/06/20 11:37:13 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXPENSE_H
# define EXPENSE_H

# include <stdbool.h>

typedef struct s_expense {
	char	*date;
	float	amount;
	char	*category;
	char	*description;
} t_expense;

typedef struct s_expense_list {
	t_expense	*items;
	int			count;
	int			capacity;
} t_expense_list;


bool	check_date_format(const char *date);
bool	check_amount_format(float amount);

t_expense_list	*create_expense_list(int initial_capacity);
int				add_expense(t_expense_list *list, t_expense e);
void			free_expense_list(t_expense_list *list);

void	print_warning(const char *message, int errcode);

#endif