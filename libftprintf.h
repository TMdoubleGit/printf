/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:49:32 by tmichel-          #+#    #+#             */
/*   Updated: 2022/12/02 16:13:53 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

void	ft_putchar_fd(char c, int fd);
char	*ft_itoa(int n);
int		ft_printchar(int c);
void	ft_putstr(char *s);
int		ft_printstr(char *s);
int		ft_printnbr(int n);
int		ft_percent(void);
int		ft_uintlen(unsigned int n);
char	*ft_uitoa(unsigned int n);
int		ft_printuint(unsigned int n);
int		ft_ptrlen(unsigned long long ptr);
void	ft_putptr(unsigned long long ptr);
int		ft_printptr(unsigned long long ptr);
int		ft_hexlen(unsigned int hex);
void	ft_puthex(unsigned int hex);
int		ft_printhex(unsigned int hex);
void	ft_puthexmaj(unsigned int hexmaj);
int		ft_printhexmaj(unsigned int hexmaj);
int		ft_format(va_list args, const char p);
int		ft_printf(const char *s, ...);

#endif