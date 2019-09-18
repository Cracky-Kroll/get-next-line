#include "get_next_line.h"
#include <stdio.h>
int			main(int ac, char **av)
{
	char	*line;
	int		fd;
	int		ret;

	(void)ac;
	fd = open(av[1], O_RDONLY);
	while ((ret = get_next_line(fd, &line)) == 1)
	{
		printf("%s\n", line);
	}
	return (0);
}
