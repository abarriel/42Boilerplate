#include "Boilerplate.h"

void build_author(t_env *e)
{
  int fd;
  char *full_path_author;
  asprintf(&full_path_author, "%s/%s", e->project_name, "auteur");
  fd = open(full_path_author, O_CREAT | O_WRONLY | O_TRUNC, 0666);
  write(fd,e->author,strlen(e->author));
  write(fd,"\n",1);
}

void build_header(int fd, t_env *e, char *name)
{
    char header[1024];
    char t[24];
    time_t  t2 = time(0);
    int   r;
    strftime(t, 24, "%Y/%m/%d %X", localtime(&t2));
    sprintf(header,"/* ************************************************************************** */\n/*                                                                            */\n/*                                                        :::      ::::::::   */\n/*   %-40.40s           :+:      :+:    :+:   */\n/*                                                    +:+ +:+         +:+     */\n/*   By: %-8s <%s@student.42.fr> %4$*9$s         +#+  +:+       +#+        */\n/*                                                +#+#+#+#+#+   +#+           */\n/*   Created: %19s by %-8s          #+#    #+#             */\n/*   Updated: %19s by %-8s         ###   ########.fr       */\n/*                                                                            */\n/* ************************************************************************** */\n", name, e->author, e->author, "", t, e->author, t, e->author,8 - strlen(e->author));
    r = write(fd, header, 1024);
}

void builder(t_env *e)
{
  mkdir(e->project_name, 0766);
  int fd;
  build_author(e);
  char *str;
  asprintf(&str,"%s.c", e->project_name);
  build_header(1, e, str);
}
