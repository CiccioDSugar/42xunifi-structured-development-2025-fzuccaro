/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recipe_generator.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 21:23:58 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/06/12 21:26:08 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RECIPE_GENERATOR_H
#define RECIPE_GENERATOR_H

struct Ingredients;
struct TasteProfile;
struct Recipe;

struct  Ingredients *get_current_ingredients(void);
struct  TasteProfile *get_user_taste_profile(void);
struct  Recipe *create_recipe(struct Ingredients *ingredients, struct TasteProfile *taste);
int     get_user_approval(struct Recipe *recipe);

void    free_ingredients(struct Ingredients *ing);
void    free_taste_profile(struct TasteProfile *tp);
void    free_recipe(struct Recipe *recipe);

struct Recipe *create_custom_recipe(void);

#endif
