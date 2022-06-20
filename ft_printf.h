/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperez- <maperez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:41:52 by maperez-          #+#    #+#             */
/*   Updated: 2022/06/20 12:30:56 by maperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_checker(const char *str, va_list args, int pos);
int		ft_putchar(int c);
size_t	ft_strlen(const char *s);
int		ft_putstr(char *s);
int		ft_putnbr(int nb);
int		ft_putten(int nb);
int		ft_puthexmin(unsigned long long nb);
int		ft_puthexmay(unsigned long long nb);

#endif