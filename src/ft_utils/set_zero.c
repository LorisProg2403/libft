/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_zero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 12:36:40 by lgaume            #+#    #+#             */
/*   Updated: 2023/12/24 12:37:05 by lgaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	set_zero(int count, ...)
{
	va_list	args;
	int		*curr;
	int		i;

	i = 0;
	va_start(args, count);
	while (i < count)
	{
		curr = va_arg(args, int *);
		*curr = 0;
		i++;
	}
	va_end(args);
}
