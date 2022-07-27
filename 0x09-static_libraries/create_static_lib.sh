#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.o
ar rc liball.a *.o
