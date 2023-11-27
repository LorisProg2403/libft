/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_errors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:08:12 by lgaume            #+#    #+#             */
/*   Updated: 2023/11/27 17:52:14 by lgaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

#include "libft.h"

void	handle_errors(char *error_msg)
{
	ft_printf("%e%e%e", "Error\n", error_msg, "\n");
	exit(1);
}
