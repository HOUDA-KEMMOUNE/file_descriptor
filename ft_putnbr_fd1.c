#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	main()
{
	char c;
	int fd;

	c = 122;
	fd = 1;
	ft_putchar_fd(c, fd);
	ft_putchar_fd('\n', fd);
}

