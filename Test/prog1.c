#include <stdio.h>
#include <unistd.h>

int main(void)
{
		
	puts("This is the first program");
	execlp("./program2","./program2",NULL);
	puts("Back at first program");
	return 0;
}
