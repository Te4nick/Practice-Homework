/*
#include <cstdio>
#include <cmath>

int main()
{
    // Declare variables
    int no_of_lines,                        // The number of lines to display in the graph
    line_count;                         // Counts the number of lines in the graph
    double sine_count,                         // Counts the sine values on the y-axis
    initial_step_size,                  // The initial step size in degrees on the x-axis
    current_step_value,                 // The current step value in degrees on the x-axis
    sine_step = 0.05,                   // The step value on the y-axis
    radian_result;                      // The resulting radian value on the x-axis
    // Prompt user for information

    printf("\nEnter the initial step size in degrees: ");
    scanf("%lf", &initial_step_size);
    printf("\nEnter the number of lines to be displayed in the graph: ");
    scanf("%d", &no_of_lines);

    // Conver to radians and assign to current step value
    current_step_value = initial_step_size * 3.14 / 180;

    // Print graph
    for (line_count = 0; line_count < no_of_lines; line_count++)
    {
        // Convert to sin value of radians
        radian_result = sin(current_step_value);

        // To ensure that wave fits in window, we count the y-axis by a certain number of steps
        for (sine_count = -1; sine_count <= 1; sine_count += sine_step)
        {
            // Check if radian x value is within y sine range
            if (radian_result >= sine_count && radian_result < (sine_count + sine_step))
            {
                printf("*\n");
                break;
            }
            else printf(" ");
        }

        // Increment steps on the x-axis
        current_step_value += initial_step_size * 3.14 / 180;
    }

    return 0;

}
*/