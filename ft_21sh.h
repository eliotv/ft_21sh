/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_21sh.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <evanheum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 09:23:24 by evanheum          #+#    #+#             */
/*   Updated: 2017/12/18 15:53:59 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_21SH_H
# define FT_21SH_H
# include "libft/megalibft.h"

typedef struct		s_token
{
	char			*token;
	struct s_token  *next;
	struct s_token	*end;
}					t_token;

typedef struct		s_shell
{
	t_token			*token;
}					t_shell;

/*
** -------------------------------- ft_21sh.c ----------------------------------
*/
void	shell_loop(t_shell *shell);
/*
** -------------------------------- init_struct.c ------------------------------
*/
t_shell			*init_shell();


#endif