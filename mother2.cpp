#include <unistd.h>
#include <sys/types.h>

int main(int argc, char** argv)
{

	int nrOfChildren = 50;
	double increment = 0;

	for(int i = 0; i < nrOfChildren; i++)
	{
		pid_t pid = fork();

		if(!pid) execlp("./infinity", "./infinity",NULL);
	}


	for(;;) increment++;

	return 0;
}
