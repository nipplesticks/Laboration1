#include <unistd.h>
#include <sys/types.h>
#include <iostream>

int main(int argc, char** argv)
{

	int nrOfChildren = 0;
	double increment = 0;
	
	std::cout << "Nr of fork?: ";
	std::cin >> nrOfChildren;

	if (nrOfChildren > 0)
	{

		//pid_t pidOfPrinter = fork();
		//if(!pidOfPrinter) execlp("./infinity", "./infinity", "0", NULL);


		for(int i = 0; i < nrOfChildren; i++)
		{
			pid_t pid = fork();

			if(!pid) execlp("./n_infinity", "./n_infinity",NULL);
		}


		for(;;) increment++;
	}	

	return 0;
}
