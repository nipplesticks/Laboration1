#include <unistd.h>
#include <sys/types.h>
#include <iostream>
#include <sys/wait.h>
#include <ctime>


int main(int argc, char** argv)
{

	int nrOfChildren = 0;
	double increment = 0;
	
	std::cout << "Nr of fork?: ";
	std::cin >> nrOfChildren;

	if (nrOfChildren > 0)
	{

		//pid_t pidOfPrinter = fork();
		//if(!pidOfPrinter) execlp("./n_infinity", "./n_infinity", "0", NULL);


		for(int i = 0; i < nrOfChildren; i++)
		{
			pid_t pid = fork();

			if(!pid) execlp("./n_infinity", "./n_infinity",NULL);
		}


		//for(;;) increment++;
		
		//pid_t lastPid = fork();
		//if(!lastPid) execlp("./n_infinity", "./n_infinity",NULL);
		waitpid(0,0,0);


		std::cout << "Mother Died at: " << time(0) << std::endl;
	}	

	return 0;
}
