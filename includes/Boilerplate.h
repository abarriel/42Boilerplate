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
# define PROGNAMELENGTH 50
# define AUTHOR 20
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <sys/stat.h>
# include "limits.h"
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/wait.h>
# include <dirent.h>
# include <fcntl.h>
# include <signal.h>
# include <time.h>

typedef struct	s_env
{
	char		author[50];
  char		project_name[20];
  int     project_type;
}				t_env;

void builder(t_env *e);
int getter(t_env *env);

#endif
