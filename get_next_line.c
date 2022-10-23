#include "get_next_line.h"

char *get_next_line(int fd) 
    {
      
 static char *reminder = "" ;
      char buf[BUFFER_SIZE + 1];
      int nbytes;
     char *ptr = malloc( BUFFER_SIZE  + 1 );
      if (!ptr || reminder == NULL)         
    {
            return NULL;
    }

     if (fd < 0 ||fd > 999 )
      {
          free (ptr);
          return NULL;
      }

      while ( (nbytes = read(fd, buf, BUFFER_SIZE)) > 0)
      {
	 buf[nbytes] = '\0';
         reminder  =ft_strjoin(reminder, buf);
	
	if (ft_strchr(reminder, '\n'))
        {
	   // ft_strcpy(reminder,ft_strchr(temp, '\n'));
		ptr = ft_substr(reminder,0,'\n');
            reminder = ft_strchr(reminder, '\n');
            return ptr;
        }
      }      
      if (ft_strcmp(reminder, "") == 0 || nbytes < 0 || reminder == NULL)
    {
	free(ptr);
        return NULL;
    }
      
      if (ft_strchr(reminder, '\0'))
        {
            ptr = reminder;
	    reminder = NULL;
		return ptr;
        }
	return NULL;
    }























