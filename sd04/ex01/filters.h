/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filters.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 11:34:47 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/06/20 11:37:10 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILTERS_H
# define FILTERS_H

# include <stdbool.h>
# include "expanse.h"

typedef enum s_filter_type
{
	DATE_FILTER,
	RANGE_DATE_FILTER,
	CATEGORY_FILTER,
}	t_filter_type;

typedef struct s_filters
{
	t_filter_type	filter_type;
	char			*category_filter;
	char			*start_date;
	char			*end_date;
}	t_filters;

/* ───── Funzioni di filtro specifiche ───── */

t_expense_list	*filter_all(const t_expense_list *list);

t_expense_list	*filter_by_category(const t_expense_list *list, const char *category_substring);

t_expense_list	*filter_by_date_range(const t_expense_list *list, const char *start_date, const char *end_date);

t_expense_list	*filter_expenses(const t_expense_list *list, const t_filters *filter);

bool	category_contains(const char *category, const char *substr);

bool	date_between(const char *date, const char *start, const char *end);

#endif