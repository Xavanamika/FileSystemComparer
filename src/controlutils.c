#include <stdio.h>



int readArgv (int argc, char* argv[])
{
    
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
                    printf("Verbose mode activated.\n");
                    break;

                    case 'i':
                    printf("Information mode activated.\n");
                    break;

                    case 't':
                    printf("Text mode activated.\n");
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