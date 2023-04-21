Design

The program starts with an initial memory size of 512KB, which is allocated using malloc(). Then, it enters an infinite loop where it sleeps for 10 seconds, doubles the memory size, and reallocates the memory using realloc(). If the memory allocation fails, the program prints an error message and exits with a non-zero status code.



Usage

To compile the program, use the following command:

    gcc -o memory_booster memory_booster.c

To run the program, simply execute the compiled binary:

    ./memory_booster

The program will print the initial memory size and then start doubling it every 10 seconds until it either runs out of memory or is terminated by the user.


Disclaimer

Use this program at your own risk. Increasing memory usage over time can cause your system to slow down or even crash, especially if other processes are also competing for memory. Make sure you have enough free memory and monitor your system's performance while running this program.
