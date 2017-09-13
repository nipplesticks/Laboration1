#include <iostream>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char* argv[])
{
	int value = 0;
	//pid_t myPid = static_cast<pid_t>(argv[1]);
	bool canIPrint = argc == 2;

	while (1)
	{
		// std::cout << value++ << std::endl;
		//std::cout << 0 << std::endl;

		if(canIPrint && value % 1000 == 0) std::cout << "My Pid: " << getpid() << std::endl << "Nr of time processed: " << value <<  std::endl;
		value++;
	}

	value = 0;
	

	return 0;
}
