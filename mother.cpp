#include <unistd.h>
#include <sys/signal.h>
#include <iostream>
#include <vector>
#include <wait.h>

int main()
{
    int choice = -1;
    bool isChild = false;
    std::vector<pid_t> pids;


    std::cout << "Would you like to fork()?\n";
    std::cout << "How many children do you want?";
    std::cin >> choice;


    for (int i = 0; i < choice && !isChild; i++)
    {
        pids.push_back(fork());

        if (pids.back() == isChild)
        {
            isChild = true;
            execlp("./infinity", "./infinity", NULL);
        }

    }


    if (!isChild)
    {
	int poo = 0;

        wait(NULL);
	/*
	while (1)
	{
		//std::cout << std::to_string(poo++) << std::endl;
		//std::cout << "Hej" << std::endl;
		poo++;
	}
	*/


        /*
        int time = -1;
        for (int i = 0; i < 100000; i++)
            time++;


        for (int i = 0; i < choice; i++)
            {
                kill(pids.back(), 9);
                pids.pop_back();
            }
            */
    }

    return 0;
}
