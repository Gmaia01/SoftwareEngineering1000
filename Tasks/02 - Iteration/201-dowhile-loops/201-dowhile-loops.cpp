#include <stdio.h>

int main()
{
    int i = 5;   // Originally was int i = 1;

    printf("Start while loop\n");

    do
    {
        printf("i = %d\n", i);
        i = i - 1;            // Originally was i = i + 1;                     // Alternatively, write i++;
    } while (i > 0);          //Originally was while (i > 5);                  //Repeat if condition is met

    printf("Finished: i = %d\n", i);
}