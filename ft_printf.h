/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 16:32:05 by awallet           #+#    #+#             */
/*   Updated: 2022/08/07 16:33:22 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

# define BIG "0123456789ABCDEF"
# define LIT "0123456789abcdef"
# define NUM "0123456789"
# if defined (__APPLE__)
#  define PTR_NULL "0x0"
#  define IS_APPLE 1
# elif __linux__
#  define PTR_NULL "(nil)"
#  define IS_APPLE 0
# endif

int		ft_print_putchar_fd(int c, int fd);
int		ft_printf(const char *str, ...);
int		ft_print_putstr_fd(char *s, int fd);
int		ft_print_nbr(int nb, int fd);
int		ft_print_base(unsigned int n, const char *pattern, int base, int fd);
int		ft_print_ptr(unsigned long int n, const char *p, int fd);

#endif