#include <unistd.h>
#include <stdio.h> 
#include <fcntl.h>
int main()
{
	int n; 
	int fd;
	char buff[1024];
	fd = open("./tonzinc.txt",O_RDONLY);
	n = read(fd, buff, 3);
	close(fd);
	buff[n] = '\0';
	printf("texte avant =%s\n", buff);
	
	
	fd = open("./tonzinc.txt", O_WRONLY | O_APPEND, 0644);
	write(fd, "ADAM EST POURRAVE ", 18);
	
	close (fd);
	fd = open("./tonzinc.txt",O_RDONLY);
	n = read(fd, buff, 21);
	buff[n] = '\0';
	printf("texte =%s\n", buff);
	close (fd);
	return(0);
}