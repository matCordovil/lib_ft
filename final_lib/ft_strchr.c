/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <made-alm@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:48:26 by made-alm          #+#    #+#             */
/*   Updated: 2022/11/18 17:46:16 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		l;
	char	*string;

	string = (char *)s;
	l = ft_strlen(string);
	i = 0;
	if (c == '\0')
		return (&string[l]);
	while (string[i] != '\0')
	{
		if (string[i] == c)
			return (&string[i]);
		i++;
	}
	return (0);
}
