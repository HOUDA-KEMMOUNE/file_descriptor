//create your own test.txt file 
//after the compilation with gcc for example,
//write in your trminal "cat test.txt"
//and you'll see the result int the test.txt file
 
#include <unistd.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	main()
{
	int fd;
        char c;

	fd = open("test.txt", O_RDWR);		
	//fd = 3, cause we have fd = 0 for the std_input
	//			fd = 1 for the std_output
	//			fd = 2 for the str_error
	c = 122;
	
	if(fd < 0)
	{
		write(2, "ERROR\n", 6);
	}
	else
	{
		ft_putchar_fd(c, fd);
		ft_putchar_fd('\n', fd);
	}
}
