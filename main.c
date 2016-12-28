#include "libft/libft.h"

int	get_next_line(const int fd, char **line);
int main (int argc, char **argv)
{
	int fd;
	char **line;
	int i;
	
	if(argc == 2)
	{	
	line = (char **)malloc(sizeof((char *) + 1 ));	
	i = 0;
	if((fd = (open(argv[1], O_RDONLY))) == -1)
	return 0;
	while(get_next_line(fd, &line[i]))
	{
		ft_putstr("appel gnl \n");
	}
	close(fd);
	free(line);
	}
	return 0;
}
