/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Boilerplate.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <pribault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/22 22:35:59 by pribault          #+#    #+#             */
/*   Updated: 2017/06/22 22:42:22 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOILERPLATE_H
# define BOILERPLATE_H

#include <stdio.h>

typedef struct	s_env
{
	char		*author;
	char		*project_name;
}				t_env;

void	get_author(t_env *env);
void	get_project_name(t_env *env);

#endif
