#include <stdio.h>
#include "controlutils.h"

int main(int argc, char* argv[])
{
    // Struct for Reading Argument results.
    // Read arguments.
    if (readArgv(argc, argv) == 404) return 404;
    
    printf("v %d i %d t %d\n", ARG_VERBOSE, ARG_INFO, ARG_TEXT);

    printf("FSCM\n");
    return 0;

}