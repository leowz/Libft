/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrforeach.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:17:24 by zweng             #+#    #+#             */
/*   Updated: 2022/12/16 19:30:15 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"

void	ft_arrforeach(t_array *arr, void (*f)(t_arritem *))
{
	size_t	i;

	i = 0;
	if (!arr)
		return ;
	while (i < arr->current_size)
	{
		f(ft_arritem_at(arr, i));
		i++;
	}
}
