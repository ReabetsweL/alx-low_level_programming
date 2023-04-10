#include "main.h"

int main(void)
{
    const char *filename = "example.txt";
    size_t letters = 1024;

    ssize_t n = read_textfile(filename, letters);

    if (n == -1)
    {
        printf("Error reading file %s\n", filename);
        return 1;
    }

    printf("%ld bytes read from file %s\n", n, filename);

    return 0;
}

