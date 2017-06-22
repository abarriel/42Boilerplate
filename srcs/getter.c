/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <pribault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/22 22:39:19 by pribault          #+#    #+#             */
/*   Updated: 2017/06/22 22:42:53 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Boilerplate.h"

void	get_author(char *author)
{
    char *tmp;
    printf("\e[38;5;10mAuthor > \033[0m");
    scanf("%50s", tmp);
    if(strlen(tmp) > AUTHOR)
      {
        printf("Wrong name length");
        exit(1);
      }
    author = tmp;
}

void	get_project_name(char *project_name)
{
char *tmp;
  printf("\e[38;5;36mProject Name > \033[0m");
  scanf("%s", project_name);
  if(strlen(tmp) > PROGNAMELENGTH)
    {
      printf("Wrong name length");
      exit(1);
    }
  project_name = tmp;
}

void	get_project_type(int project_type)
{
  char buffer[128];

  while(1)
  {
    printf("\e[38;5;6mProject Type : \033[0m");
    printf("1: Binary -  2: Library\n\t");
    scanf("%s", buffer);
    for (int i = 0; buffer[i]; i++)
    {
      tolower(buffer[i]);
    }
    if (!strcmp(buffer, "1") || !strcmp(buffer, "binary"))
    {
      project_type = 1;
      return ;
    }
    if (!strcmp(buffer, "2") || !strcmp(buffer, "library"))
    {
      project_type = 2;
      return ;
    }
  }
  // scanf("%s", project_name);
}
int getter(t_env *env)
{
  get_author(env->author);
  get_project_name(env->project_name);
  get_project_type(env->project_type);
  return 0;
}
