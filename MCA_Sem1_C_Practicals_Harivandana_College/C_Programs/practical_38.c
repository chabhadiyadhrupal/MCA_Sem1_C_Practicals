/*
 * Harivandana College || HVC
 * Subject: Programming with C (MCA Semester 1)
 * Practical 38
 * Question: Define structure data type called time_struct containing three member’s integer hour, integer minute and integer second. Develop a program that would assign values to the individual number and display the time in the following format: 16: 40:51
 */

#include <stdio.h>

struct time_struct {
    int hour;
    int minute;
    int second;
};

int main() {
    struct time_struct t;

    t.hour = 16;
    t.minute = 40;
    t.second = 51;

    printf("Formatted Time Display:\n");
    printf("%02d: %02d:%02d\n", t.hour, t.minute, t.second);

    return 0;
}
