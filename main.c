#include "libft/libft.h"
#include "get_next_line.h"

/*int main (int argc, char **argv)
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
		while(get_next_line(fd, &line))
			ft_putendl(line);
		close(fd);
		free(line);
	}
	return 0;
}*/
int		main(int argc, char **argv)
{
	int		fd;
	char	*line;

	if (argc == 1)
		fd = 0;
	else if (argc == 2)
		fd = open(argv[1], O_RDONLY);
	else
		return (2);
	while (get_next_line(fd, &line) == 1)
	{
		ft_putendl(line);
		free(line);
	}
	if (argc == 2)
		close(fd);
}
