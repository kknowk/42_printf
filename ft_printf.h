/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khorike <khorike@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:52:35 by khorike           #+#    #+#             */
/*   Updated: 2023/05/31 17:20:48 by khorike          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>

ssize_t			ft_putchar(char c);
ssize_t			ft_putstr(char *s);
ssize_t			ft_putnbr(int n);
ssize_t			ft_put_unsigned_nbr(unsigned int n);
ssize_t			ft_putnbr_base(long int n, int low_or_up);
ssize_t			ft_put_pointer(unsigned long long n);
size_t			ft_strlen(const char *s);

int				ft_printf(const char *format, ...);

#endif
