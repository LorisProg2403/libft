/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 00:17:57 by lgaume            #+#    #+#             */
/*   Updated: 2023/10/29 00:17:59 by lgaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	int		len;
	char	*num;

	if (n == 0)
		return (ft_putstr("0"));
	num = ft_unsigned_itoa(n);
	len = ft_putstr(num);
	free(num);
	return (len);
}
