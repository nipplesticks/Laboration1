#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <ctime>


int main(int argc, char* argv[])
{
	int value = 0;
	//pid_t myPid = static_cast<pid_t>(argv[1]);
	bool canIPrint = argc == 2;
	time_t startTime = time(0);

	while (time(0) - startTime < 20)
	{
		// std::cout << value++ << std::endl;
		//std::cout << 0 << std::endl;

		value++;
	}

	value = 0;
	
	std::cout << "I died at: " << time(0) << std::endl;	

	return 0;
}
