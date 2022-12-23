/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ternary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <zweng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:51:12 by zweng             #+#    #+#             */
/*   Updated: 2022/12/23 17:33:15 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_ternary(int x, const char *s1, const char *s2)
{
	if (x)
		return ((char *)s1);
	else
		return ((char *)s2);
}

int	ft_ternary_int(int x, const int n1, const int n2)
{
	if (x)
		return (n1);
	else
		return (n2);
}
