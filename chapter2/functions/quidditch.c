#include <cs50.h>
#include <stdio.h>

// Function prototype
int final_score(int goal_num, bool snitch_caught);

int main(void)
{
    int goal_num = get_int("Number of times your chasers got the quaffle through a hoop: ");
    bool snitch_caught = get_int("Did your team's seeker catch the snitch? Enter 1 if true, 0 otherwise: ");
    int score = final_score(goal_num, snitch_caught); // Function call
    printf("Your team's final score is: %d\n", score);
}

// Function definition
// Return the final score given number of goals and if the snitch was caught
// 10 for a goal, 150 for snitch
int final_score(int goal_num, bool snitch_caught)
{
    return 10 * goal_num + 150 * snitch_caught;
}
