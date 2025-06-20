/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   average.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:49:09 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/06/17 11:09:48 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "average.h"

float	average(const int *arr, int size)
{
	int		valid_element;
	int		sum;
	int		i;
	float	average;

	valid_element = 0;
	sum = 0;
	i = 0;
	average= 0;

	while (i < size)
	{
		if (arr[i] >= 0 && arr[i] <= 100)
		{
			sum += arr[i];
			valid_element++;
			i++;
		}
		else
			i++;
	}
	average = (float)sum / (float)valid_element;
	return (average);
}
