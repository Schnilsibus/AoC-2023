#include <stdlib.h>
#include <stdio.h>


int popen(const char *command, char *result) {
    int exit_value;
    int scan_return;
    
    exit_value = system(command);
    if (exit_value != 0) {
        return exit_value;
    }
    scan_return = ("%s", &result);
    if (scan_return == EOF || scan_return != 1) {
        *result = NULL;
        return exit_value;
    }
    return exit_value;
}