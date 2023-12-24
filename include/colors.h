/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaume <lgaume@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 12:38:37 by lgaume            #+#    #+#             */
/*   Updated: 2023/12/24 12:38:38 by lgaume           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLORS_H
# define COLORS_H

// Utils
# define BOLD			"\033[1m"
# define RESET			"\033[0m"
# define UNDERLIGNED	"\033[4m"

// Colors
# define BLACK			"\033[30m"
# define RED			"\033[31m"
# define GREEN			"\033[32m"
# define YELLOW			"\033[33m"
# define BLUE			"\033[34m"
# define MAGENTA		"\033[35m"
# define CYAN			"\033[36m"
# define WHITE			"\033[37m"

// Bold colors
# define BBLACK			"\033[1;30m"
# define BRED			"\033[1;31m"
# define BGREEN			"\033[1;32m"
# define BYELLOW		"\033[1;33m"
# define BBLUE			"\033[1;34m"
# define BMAGENTA		"\033[1;35m"
# define BCYAN			"\033[1;36m"
# define BWHITE			"\033[1;37m"

// Underligned colors
# define UBLACK			"\033[4;30m"
# define URED			"\033[4;31m"
# define UGREEN			"\033[4;32m"
# define UYELLOW		"\033[4;33m"
# define UBLUE			"\033[4;34m"
# define UMAGENTA		"\033[4;35m"
# define UCYAN			"\033[4;36m"
# define UWHITE			"\033[4;37m"

// Underligned and bold colors
# define UBBLACK		"\033[1;4;30m"
# define UBRED			"\033[1;4;31m"
# define UBGREEN		"\033[1;4;32m"
# define UBYELLOW		"\033[1;4;33m"
# define UBBLUE			"\033[1;4;34m"
# define UBMAGENTA		"\033[1;4;35m"
# define UBCYAN			"\033[1;4;36m"
# define UBWHITE		"\033[1;4;37m"

#endif
