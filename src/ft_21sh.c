/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_21sh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <evanheum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 09:39:29 by evanheum          #+#    #+#             */
/*   Updated: 2017/12/18 15:53:29 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_21sh.h"

void	shell_loop(t_shell *shell)
{
	char	*buffer;
	
	while(1)
	{
		ft_printf(BLUE"shell"END GREEN" > "END);
		get_next_line(0, &buffer);
		if (!ft_strcmp(buffer, "exit"))
			exit(1);
		
		// ft_printf("command = %s\n", buffer);
	}
}
int main(void)
{
	t_shell *shell;

	shell = init_shell();
	shell_loop(shell);
}