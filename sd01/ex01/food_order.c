/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   food_order.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 19:34:10 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/06/12 20:36:15 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "food_order.h"

int process_food_order(struct OrderRequest *request)
{
    OC  *confirmation;

    confirmation = NULL;
    if (check_restaurant_status(request) == 1)
    {
        confirmation = create_standard_confirmation();
    }
    else if (check_restaurant_status(request) == 0)
    {
        confirmation = create_preorder_confirmation();
    }
    if (!confirmation)
        return (0);
    send_confirmation_notification(confirmation);
    return (1);
}
