#include <stdio.h>


int ARG_VERBOSE = 0;
int ARG_INFO = 0;
int ARG_TEXT = 0;


int readArgv (int argc, char* argv[])
{

    ARG_VERBOSE = 0;
    ARG_INFO = 0;
    ARG_TEXT = 0;
    
    for (int i = 0; i < argc; i++)
    {
        char argument = '-';
        if (argc > 1) 
        {
        argument = argv[i][1];
        if (argv[i][0] == '-') 
            {
            printf("Par: %s \n", argv[i]);
            switch(argument) 
                {
                    case 'v':
                    //printf("Verbose mode activated.\n");
                    ARG_VERBOSE = 1;
                    break;

                    case 'i':
                    //printf("Information mode activated.\n");
                    ARG_INFO = 1;
                    break;

                    case 't':
                    //printf("Text mode activated.\n");
                    ARG_TEXT = 1;
                    break;

                    default:
                    printf("%s doesn not exist! Type help for argument list!\n", argv[i]);
                    return 404;
                }

            }
        }
    }

    return 0;

}