#include <stdio.h>

/* Declare a buffer for user input of size 2048 */
static char input[2048];

int main(int argc, char ** argv) {

    /* Print version and exit info*/
    puts("GentLisp Version 0.0.0.0.1");
    puts("Press Ctrl+c to Exit\n");

    /* Main Loop */
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmissing-noreturn"
    while(1){

        fputs("Lispy> ", stdout);

        fgets(input, 2048, stdin);

        printf("What does this mean: %s", input);
    }
#pragma clang diagnostic pop

    return 0;

}