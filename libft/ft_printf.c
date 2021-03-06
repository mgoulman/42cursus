/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoulman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 15:12:27 by mgoulman          #+#    #+#             */
/*   Updated: 2019/09/22 14:15:30 by mgoulman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "libft/libft.h"

void	printx_hexa(unsigned long int p)
{
	char *str;
	int nb[255];
	int i;

	i = 0;
	str = "0123456789abcdef";
	if (p == 0)
		write(1, "0", 1);
	while (p >= 16)
	{
		nb[i++] = p % 16;
		p /= 16;
	}
	nb[i] = p % 16;
	while (i >= 0)
		write(1, &str[nb[i--]], 1);
}

void	printX_hexa(unsigned long int p)
{
	char *str;
	int nb[255];
	int i;

	i = 0;
	str = "0123456789ABCDEF";
	if (p == 0)
		write(1, "0", 1);
	while(p >= 16)
	{
		nb[i++] = p % 16;
		p /= 16;
	}
	nb[i] = p % 16;
	while (i >= 0)
		write(1, &str[nb[i--]], 1);
}

void	print_octal(unsigned long int p)
{
	char *str;
	int nb[255];
	int i;

	i = 0;
	str = "01234567";
	if (p == 0)
		write(1, "0", 1);
	while (p >= 8)
	{
		nb[i++] = p % 8;
		p /= 8;
	}
	nb[i] = p % 8;
	while (i >= 0)
		write(1, &str[nb[i--]], 1);
}
void	ft_unsignedn(unsigned long int n)
{
	if (n > 0 && n < 10)
	{
		ft_putchar(n + '0');
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}


void	u_flag(long *j)
{
	unsigned int max;
	unsigned int i;

	i = 0;
	max = 4294967295;
	if (*j >= 0)
		ft_unsignedn(*j);
	else
	{
		i = max + *j + 1;
		ft_unsignedn(i);
	}
}

void	ft_putlong(long long n)
{
	if (n >= 0 && n < 10)
	{
		ft_putchar(n + '0');
	}
	else if (n >= 10)
	{
		ft_putlong(n / 10);
		ft_putlong(n % 10);
	}
	else if (n > -10)
	{
		ft_putchar('-');
		ft_putchar(-1 * n + '0');
	}
	else
	{
		ft_putchar('-');
		ft_putlong(-1 * (n / 10));
		ft_putlong(n % 10 * -1);
	}
}

void	ft_printf(const char *fmt, ...)
{
	va_list ap;
	int *p;
	int i;
	long j;


	i = 0;
	va_start(ap, fmt);
	while (fmt[i] != '\0')
	{
		if (fmt[i] == '%')
		{
			i++;
			if (fmt[i] == 's')
				ft_putstr(va_arg(ap, char *));
			else if (fmt[i] == 'd' || fmt[i] == 'i')
				ft_putnbr(va_arg(ap, int));
			else if (fmt[i] == 'c')
				ft_putchar(va_arg(ap, int));
			else if (fmt[i] == 'p')
			{
				p = (va_arg(ap, int *));
				write(1, "0x", 2);
				printx_hexa((unsigned long int)p);
			}
			else if (fmt[i] == 'x')
				printx_hexa(va_arg(ap, int));
			else if (fmt[i] == 'X')
				printX_hexa(va_arg(ap, int));
			else if (fmt[i] == 'o')
				print_octal(va_arg(ap, int));
			else if (fmt[i] == 'u')
			{	
				j = va_arg(ap, int);
				u_flag(&j);
			}
			else if (fmt[i] == 'l')
			{
				if (fmt[i + 1] == 'd' || fmt[i + 1] == 'i')
					ft_putlong(va_arg(ap, long));
				else if (fmt[i + 1] == 'o')
					print_octal(va_arg(ap, long));
				else if (fmt[i + 1] == 'u')
				{
					j = va_arg(ap, long);
					u_flag(&j);
				}
					
			}
		}
		else
		{
			if (fmt[i] == '%')
				i++;
			else
				i += 2;
			ft_putchar(fmt[i]);
		}
		i++;
	}
	va_end(ap);
}

int main()
{

	//	int a = 1;
		long long p = -2;

	char *i = "fhdh";

	ft_printf("%lu \n", p);

	printf("\n%llu \n", p);
	//	ft_printf("never give  %s", "up");
	return (0);
}
