#include "header.h"

int main(int argc, char *argv[]) {

  int fd;
  char buf[14];

  fd = open("newfile.txt", O_CREAT | O_WRONLY, 0600);

  if (fd == -1)
    {
      printf("failure to create and open file\n");
      exit(1);
    }

  write(fd, "Adios Bitch\n", 12);
  close(fd);

  fd = open("newfile.txt", O_RDONLY);

  if (fd == -1)
    {
      printf("failure to opn and read file\n");
      exit(1);
    }

  read(fd, buf, 13);
  buf[13] = '\0';

  close(fd);

  printf("buf: %s\n", buf);

  return 0;
}
