/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grade_mapping.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzuccaro <fzuccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:15:42 by fzuccaro          #+#    #+#             */
/*   Updated: 2025/06/12 18:43:38 by fzuccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grade_mapping.h"

const char *map_plus_minus(int score)
{
	if (score >= 97) return "A+";
	if (score >= 93) return "A";
	if (score >= 90) return "A-";
	if (score >= 87) return "B+";
	if (score >= 83) return "B";
	if (score >= 80) return "B-";
	if (score >= 77) return "C+";
	if (score >= 73) return "C";
	if (score >= 70) return "C-";
	if (score >= 67) return "D+";
	if (score >= 63) return "D";
	if (score >= 60) return "D-";
	return ("F");
}

const char *map_pass_fail(int score) {
	if (score >= 60)
		return "P";
	return ("F");
}

const char *map_standard(int score) {
	if (score >= 90)
		return ("A");
	if (score >= 80)
		return ("B");
	if (score >= 70)
		return ("C");
	if (score >= 60)
		return ("D");
	return ("F");
}

void map_scores(const int *scores, int size, GradeMapper mapper, const char **mapped_grades)
{
    int i;

    i = 0;
    while (i < size)
    {
		if (mapper == PLUS_MINUS)
			mapped_grades[i] = map_plus_minus(scores[i]);
        else if (mapper == PASS_FAIL)
        	mapped_grades[i] = map_pass_fail(scores[i]);
        else if (mapper == STANDARD)
            mapped_grades[i] = map_standard(scores[i]);
        i++;
    }
}

