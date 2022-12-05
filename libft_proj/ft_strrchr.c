/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <made-alm@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:03:54 by made-alm          #+#    #+#             */
/*   Updated: 2022/11/18 17:47:39 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		l;
	char	*string;

	string = (char *)s;
	l = ft_strlen(string);
	i = l;
	if (c == '\0')
		return (&string[l]);
	while (i >= 0)
	{
		if (string[i] == c)
			return (&string[i]);
		i--;
	}
	return (0);
}
