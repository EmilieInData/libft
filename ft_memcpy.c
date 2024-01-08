/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esellier <esellier@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 21:27:30 by esellier          #+#    #+#             */
/*   Updated: 2023/12/08 22:51:29 by esellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*memcpy(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*s;
	unsigned char	*d;

	src = (unsigned char *)s;
	dest = (unsigned char *)d;
	i = 0;
	while (i < n - 1)
	{
		d[i] = s[i];
		i++;
	}
	s[i] = '\0';
	return (dest);
}
