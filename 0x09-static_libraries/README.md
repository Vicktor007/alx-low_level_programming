Commands 🖊️

ar -t libmy.a

nm libmy.a

Task 2

Automated: 🚗

#!/bin/bash

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c

ar -rc liball.a *.o
