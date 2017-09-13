#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <ctime>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int value = 0;
	time_t bug = time(0);
	//pid_t myPid = static_cast<pid_t>(argv[1]);
	bool canIDie = argc == 2;
	time_t startTime = time(0);
	int* tal = new int[10];	
	while (time(0) - startTime < 20)
	{
		// std::cout << value++ << std::endl;
		//std::cout << 0 << std::endl;

		value++;
		if(canIDie && (time(0) - bug > 10))
		{
			int death = 10/0;
//			tal[99] = -1;
//			delete[] tal;
//			std::cout << tal[99]  << std::endl;
	 	}
	}

	value = 0;
	
//	std::cout << "Child with pid: " << getpid() << " died at: " << time(0) << std::endl;	
	exit(0);
	return 0;
}
