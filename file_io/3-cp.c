#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

void close_file(int fd);

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 on success, exits with different codes on errors.
 */
int main(int argc, char *argv[])
{
    int from_fd, to_fd, rd, wr;
    char buffer[BUFFER_SIZE];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    from_fd = open(argv[1], O_RDONLY);
    if (from_fd < 0)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (to_fd < 0)
    {
        close_file(from_fd);
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }

    while ((rd = read(from_fd, buffer, BUFFER_SIZE)) > 0)
    {
        wr = write(to_fd, buffer, rd);
        if (wr != rd)
        {
            close_file(from_fd);
            close_file(to_fd);
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            exit(99);
        }
    }

    if (rd == -1)
    {
        close_file(from_fd);
        close_file(to_fd);
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    close_file(from_fd);
    close_file(to_fd);

    return (0);
}

/**
 * close_file - Closes a file descriptor and handles errors.
 * @fd: File descriptor to close.
 */
void close_file(int fd)
{
    if (close(fd) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        exit(100);
    }
}

