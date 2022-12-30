#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    // Set initial memory size to 512KB
    size_t mem_size = 512 * 1024;

    // Allocate memory
    void *ptr = malloc(mem_size);
    if (ptr == NULL)
    {
        printf("Error allocating memory\n");
        return 1;
    }

    // Print initial memory size
    printf("Initial memory size: %ldKB\n", mem_size / 1024);

    // Double memory size every 10 seconds
    while (1)
    {
        sleep(10);
        mem_size *= 2;
        ptr = realloc(ptr, mem_size);
        if (ptr == NULL)
        {
            printf("Error allocating memory\n");
            return 1;
        }
        printf("Increased memory size to: %ldKB\n", mem_size / 1024);
    }

    return 0;
}
