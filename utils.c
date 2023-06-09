#include <stdio.h>
#include "utils.h"

void clear_screen()
{
    // Code to clear the screen
    // This function can be implemented based on your specific platform or library
}

void delay(unsigned int milliseconds)
{
    // Code to delay execution for the specified number of milliseconds
    // This function can be implemented based on your specific platform or library
}

void print_message(const char *message)
{
    printf("%s\n", message);
}

void print_error(const char *error_message)
{
    fprintf(stderr, "Error: %s\n", error_message);
}
