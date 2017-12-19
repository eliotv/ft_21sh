/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <evanheum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 15:09:56 by evanheum          #+#    #+#             */
/*   Updated: 2017/12/18 15:19:55 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_21sh.h"

t_shell			*init_shell(void)
{
	t_shell		*shell;

	shell = (t_shell*)malloc(sizeof(t_shell));
	shell->token = NULL;
	return (shell);
}