#!/bin/bash
<<<<<<< HEAD
gcc -Wall -pedantic -Werror -Wextra -C *.C
ar -rc liball.a *.o
ranlib liball.a
=======
gcc -c *.c
ar -rcs liball.a *.o
>>>>>>> 4d4f96bc98053bf24631fc8eeffcfc134523a663
