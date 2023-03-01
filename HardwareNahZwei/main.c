#include <stdio.h>

#include "sinuscalc.h"


#define TABLE_SIZE 10
#define MAX_DEGREES 360



int stringLength(char *string) {
    int length = 0;
    while (*string != '\0') {
        length++;
        string++;
    }
    return length;
}

int main() {
    char string[] = "Hello, world!";
    int length = stringLength(string);
    printf("Length of string '%s': %d\n", string, length);
    // Test the function with angles from 0 to 360 degrees in steps of 10 degrees

    for (int angle = 0; angle <= MAX_DEGREES; angle += 10) {
        int sine_value = int_sinus(angle);
        printf("sin(%d) = %d\n", angle, sine_value);
    }


    return 0;
}
