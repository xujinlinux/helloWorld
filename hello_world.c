#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("hello world, my name is xujin, the email is xujinlinux@163.com\n");

	if (argc != 2)
	{
		printf("param num error!\n");
		return -1;
	}

	printf("argv[0] = %s\nargv[1] = %s\n", argv[0], argv[1]);
	
    
    return 0;
}
