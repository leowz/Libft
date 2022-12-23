/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrbubblesort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vagrant </var/mail/vagrant>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:30:27 by vagrant           #+#    #+#             */
/*   Updated: 2022/12/16 19:28:09 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"

static void	pf_bubblesort(t_array *arr, unsigned int len,
		int (*cmp)(t_arritem *lhs, t_arritem *rhs))
{
	size_t	i;
	size_t	n;
	int		swap;

	n = len;
	swap = TRUE;
	while (swap)
	{
		i = 0;
		swap = FALSE;
		while (i + 1 < n)
		{
			if (cmp(ft_arritem_at(arr, i), ft_arritem_at(arr, i + 1)) > 0)
			{
				ft_arrswap(arr, (int)i, (int)(i + 1));
				swap = TRUE;
			}
			i++;
		}
		n--;
	}
}

void	ft_arrbubblesort(t_array *arr, int (*cmp)(t_arritem *lhs,
			t_arritem *rhs))
{
	if (!arr || !cmp || arr->current_size <= 1)
		return ;
	pf_bubblesort(arr, arr->current_size, cmp);
}
