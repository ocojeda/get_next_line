#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(){
  int fds[10];
  char *str;

  fds[0] = open("get_next_line.h", O_RDONLY, 0666);
  fds[1] = open("get_next_line.c", O_RDONLY, 0666);
  fds[2] = open("libft/ft_strlen.c", O_RDONLY, 0666);
  fds[3] = open("libft/libft.h", O_RDONLY, 0666);
  fds[4] = open("author", O_RDONLY, 0666);
  fds[5] = open("libft/ft_lstdel.c", O_RDONLY, 0666);
  fds[6] = open("libft/ft_putnbr.c", O_RDONLY, 0666);
  fds[7] = open("libft/ft_memccpy.c", O_RDONLY, 0666);
  fds[8] = open("libft/Makefile", O_RDONLY, 0666);
  fds[9] = open("libft/ft_min.c", O_RDONLY, 0666);

  int ok = 1;
  for (int i = 0; i < 10; i++)
  {
    ok &= fds[i] > -1 ? 1 : 0;
     if (!ok)
    {
    ft_putendl("error");
    return 255;
    } 
  }
  
  int i = 0;
  while (i < 10)
    {
      while(get_next_line(fds[i], &str)){
	printf("%s\n", str);
	free(str);
      }
      i++;
    }
  get_next_line(100000000, &str);
  return (0);
}