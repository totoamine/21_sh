/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ifcount.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youarzaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 22:11:39 by youarzaz          #+#    #+#             */
/*   Updated: 2019/04/13 22:11:51 by youarzaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_ifcount(char *s, int (*f)(int))
{
	int i;
	int j;

	if (!s)
		return (-1);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (f(s[i]))
			j++;
		i++;
	}
	return (j);
}
