#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h> 
#include <string.h>

#define BUFFER_SIZE 1

char    *ft_strdup(char *src);
char *ft_strcat(char *dest, char *src);
char *ft_strcpy(char *dest, char *src);
int	ft_strcmp(char *s1, char *s2);
char	*ft_strchr( char *s, int c);
char 	*ft_strjoin(char  *s1, char   *s2);
char  *get_next_line(int fd);
int ft_strlen(char *str);
char *ft_substr(char *s, unsigned int start, char c);


#endif
