/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recipe_generator.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 21:23:55 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/06/12 21:27:31 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "recipe_generator.h"

struct Recipe   *create_custom_recipe(void)
{
    struct Ingredients *ingredients = get_current_ingredients();
    if (!ingredients)
        return (0);
    struct TasteProfile *taste = get_user_taste_profile();
    if (!taste)
    {
        free_ingredients(ingredients);
        return (0);
    }
    struct Recipe *recipe = 0;
    int approved = 0;
    while (!approved)
    {
        recipe = create_recipe(ingredients, taste);
        if (!recipe)
        {
            free_ingredients(ingredients);
            free_taste_profile(taste);
            return (0);
        }
        approved = get_user_approval(recipe);
        if (!approved)
        {
            free_recipe(recipe);
            recipe = 0;
        }
    }
    free_ingredients(ingredients);
    free_taste_profile(taste);
    return (recipe);
}
