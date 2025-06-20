/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   critical_windows.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:38:52 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/06/12 14:45:52 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "critical_windows.h"


int	average(const int *arr, int start, int end)
{
    int		element;
	int		sum;
	int		i;
	int	average;

	element = 0;
	sum = 0;
	i = start;
	average= 0;

	while ( i < end)
	{
        sum += arr[i];
        element++;
        i++;
	}
	average = sum / element;
	return (average);
}

bool is_critical_window(const int *readings_array, int start, int end)
{
    int i;
    int more_than_70;
    
    i = start;
    more_than_70 = 0;
    
    while (i < end)
    {
        if (readings_array[i] > 150)
            return (false);
        else if (readings_array[i] >= 70)
            more_than_70++;
        i++;
    }
    if (more_than_70 >= 3 && average(readings_array, start, end) > 90)
        return (true);
    return (false);
}
int count_critical_windows(const int *readings, int size)
{
    int i;
    int critical_windows_count;
    int end;

    i = 0;
    critical_windows_count = 0;
    end = 0;
    while (i <= size - 5)
    {
        end = i + 5;
        if (end > size)
            end = size;
        if (is_critical_window((readings), i, end) == true)
            critical_windows_count++;
        i++;
    }
    return (critical_windows_count);
}

