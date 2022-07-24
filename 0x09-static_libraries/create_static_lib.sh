#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.o
ar rcs liball.a *.o
