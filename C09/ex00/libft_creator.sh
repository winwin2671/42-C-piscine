#!/bin/sh -e
gcc -Wall -Wextra -Werror -c *.c
ar cr libft.a *.o
ranlib libft.a
