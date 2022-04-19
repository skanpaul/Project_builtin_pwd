/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <ski@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:59:47 by ski               #+#    #+#             */
/*   Updated: 2022/04/19 14:57:54 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
/* ************************************************************************** */
#define		SAME_STRING		0
/* ************************************************************************** */
int main (int argc, char **argv, char **envp)
{
	pid_t fk_pid;
	char *new_line;

	while(1)
	{
		new_line = readline("prompt> ");
		if (strcmp(new_line, "exit") == SAME_STRING)
			break ;
		
		if (strcmp(new_line, "pwd") == SAME_STRING)
			pwd_builtin();
		
		if (new_line)
			free(new_line);
	}

	printf("sortie du programme\n");

	return (0);
}
	
// // ------------------- FORK ERROR ---------------------
// if (fk_pid == FORK_ERROR)
// 	return (ERROR);

// // ------------------- PARENT ------------------------
// if (is_parent(fk_pid))
// {

// }

// // --------------------- CHILD ------------------------
// if (fk_pid == FORK_CHILD)
// {

// }

// // ---------------------------------------------------