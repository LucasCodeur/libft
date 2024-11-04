/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_test.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam <marvin@42.fr> >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:47:44 by lud-adam          #+#    #+#             */
/*   Updated: 2024/11/04 18:49:24 by lud-adam         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_TEST_H
# define FUNCTIONS_TEST_H

# define TEST_ALPHA_MINUS 'a'
# define TEST_ALPHA_CAPITAL 'A'
# define TEST_WRONG_CHARACTER '?'
# define TEST_DIGIT '1'
# define TEST_WHITE_SPACE '\t'
# define TEST_SPECIAL_CHARACTER '!'
# define TEST_END_SPECIAL_CHARACTER '~'

void	test_ft_isalpha(void);
void	test_ft_isdigit(void);
void    test_ft_isalnum(void);
void    test_ft_isascii(void);
void    test_ft_isprint(void);

#endif