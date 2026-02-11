#include "get_next_line.h"
#include <fcntl.h>

char *get_next_line(int fd)
{
    return("");
}


#include <stdio.h>
int main(void)
{
    int fd;
    fd = open("./file.txt", O_RDONLY);
    printf("le num %d\n", fd);
}