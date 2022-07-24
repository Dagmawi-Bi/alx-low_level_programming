#!/bin/bash
gcc -wall -wextra -werror -pedantic -c *.o
ar rcs liball.a *.o
