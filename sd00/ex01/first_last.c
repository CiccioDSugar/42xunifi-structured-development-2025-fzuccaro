/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_last.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 15:33:17 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/06/11 16:44:36 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void first_last(int arr[], int size, int target, int *first, int *last)
{
    int i;
    int target_was_found;

  
    *first = -1;
    *last = -1;
    i = 0;


    while (i < size)
    {
        if (arr[i] == target)
        {
            if (*first == -1)
                *first = i;
            *last = i;
        }
        i++;
    }
}
