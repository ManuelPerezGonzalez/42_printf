/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:40:31 by maperez-          #+#    #+#             */
/*   Updated: 2022/05/31 12:08:32 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printflibft.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;

	if (format == NULL)
		return (NULL);
	va_start(ap, format);
}
