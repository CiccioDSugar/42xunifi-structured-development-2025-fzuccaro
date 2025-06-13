/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   food_order.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 19:34:16 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/06/12 20:28:04 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FOOD_ORDER_H
#define FOOD_ORDER_H
#include <stdlib.h>
#include <stdbool.h>

typedef struct OrderConfirmation
{
    char    *message;
}               OC;

typedef struct OrderRequest
{
    char    *order;
    int     what_time;
}               OR;

struct  OrderConfirmation *create_standard_confirmation(void);
struct  OrderConfirmation *create_preorder_confirmation(void);
int     check_restaurant_status(struct OrderRequest *request);
void    send_confirmation_notification(struct OrderConfirmation *confirmation);

#endif