#!/bin/bash
echo -e "#include <stdlib.h>\nint rand(void) { return 9; }" > /tmp/libhack.c
gcc -shared -fPIC -o /tmp/libhack.so /tmp/libhack.c
export LD_PRELOAD=/tmp/libhack.so
