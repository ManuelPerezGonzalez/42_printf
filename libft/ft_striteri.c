/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:13:14 by maperez-          #+#    #+#             */
/*   Updated: 2022/04/28 13:08:21 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	ssize_t	pos;

	if (!s || !f)
		return ;
	pos = 0;
	while (s[pos])
	{
		f(pos, &s[pos]);
		pos++;
	}
}
