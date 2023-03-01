#include <math.h>

#define TABLE_SIZE 10
#define MAX_DEGREES 360

int sine_table[TABLE_SIZE] = {0, 173, 342, 500, 643, 766, 866, 939, 982, 993};

int int_sinus(int angleInDegrees) {
    // Normalize angle to range [0, 360)
    angleInDegrees %= MAX_DEGREES;
    if (angleInDegrees < 0) {
        angleInDegrees += MAX_DEGREES;
    }

    // Find the index of the sine value in the table
    int index = (angleInDegrees * TABLE_SIZE) / MAX_DEGREES;

    // Return the sine value from the table
    return sine_table[index];
}








