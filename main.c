#include "get_next_line.h"

int main()
{
    int fd;
    fd = open("foo.txt", O_RDONLY);
    char *line ;
   	int i = 1;
   while (1)
   {
        line = get_next_line(fd);

       	if (line == NULL)
          {
		free(line);
           	 break;
          }
	printf("%d.%s",i, line);
	free(line);
	i++;

   }
   free(line);
    return 0;
}

