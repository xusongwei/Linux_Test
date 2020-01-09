#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
int main(int argc ,const char* argv[])
{
	int fd = open("hello",O_RDWR | O_CREAT,777);
	if(fd==-1)
	{
		printf("open failed\n");
	}
	close(fd);
	
	return 0;	
}
