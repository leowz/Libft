/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zweng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 11:21:06 by zweng             #+#    #+#             */
/*   Updated: 2022/12/23 17:28:42 by zweng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ret;

	ret = 0;
	ret = (char *)malloc(sizeof(char) * (size + 1));
	if (ret)
		ft_bzero(ret, size + 1);
	return (ret);
}
