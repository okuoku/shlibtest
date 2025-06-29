#include <stdio.h>
#include <addtwo.h>

int
main(int ac, char** av){
    (void) ac;
    (void) av;

    printf("Adding 1 + 1 = %d\n", addtwo(1,1));

    return 0;
}
