#include "get_next_line.h"

int main()
{
	int fd, fd1;
	char	*next_line;
	fd = open("test_files/text.txt", O_RDONLY);
	fd1 = open("test_files/normal.txt", O_RDONLY);

	while ((next_line = get_next_line(fd)) != NULL)
	{
		printf("%s", next_line);
		free(next_line);
	}
	close (fd);
	while((next_line = get_next_line(fd1)) != NULL)
	{
		printf("%s", next_line);
		free(next_line);
	}
	close(fd1);
	return (0);
}
