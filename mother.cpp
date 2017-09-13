#include <unistd.h>
#include <sys/signal.h>
#include <iostream>
#include <vector>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>

int main()
{
	int choice = -1;
	bool isChild = false;
	    std::vector<pid_t> pids;


	    std::cout << "Would you like to fork()?\n";
	    std::cout << "How many children do you want?";
	    std::cin >> choice;

	pids.push_back(fork());
	if(!pids.back()) execlp("./n_infinity", "./n_infinity","0",  NULL);

	    for (int i = 0; i < choice - 1 && !isChild; i++)
	    {
		pids.push_back(fork());
		if (!pids.back())
		{
		    execlp("./n_infinity", "./n_infinity", NULL);
		}

	    }

		
	for(int i = 0; i < pids.size(); i++)
	{
		int status;
		waitpid(pids[i], &status, 0);
		std::cout << "PARENT: Child: " << pids[i] << " Exit status: " << (WIFSIGNALED(status) ? "Forced!!!!!": "Normal")  << " ,Signal:  " << status<< std::endl;
	}  

	std::cout << "MUTTER IST DEAD" << std::endl;
    return 0;
}
