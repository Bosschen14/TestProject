#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/*
 * Name :  <insert name here>
 *
 * Simple Wumpus game in 1D
*/

/* Add any #defines here */


/* Add any function prototypes here */

/* Id's for things in our Cave */
#define Empty 0
#define Wumpus 1
#define End 2
/* Number of rooms in our Cave */
#define CaveSize 20
#define ArraySize (CaveSize + 2)

int cave[ArraySize];
int* agentRoom;
int* GetEmptyRoom(int cave[]);
int agentDirection;
void DisplayWorld(int cave[], int* agent, int agentDir);
/* Directions I can face */
#define Left 0
#define Right 1


int main()
{

    char command[20];
    /* Seed the random number generator */
    srand(time(NULL));

    agentRoom = GetEmptyRoom(cave);
    agentDirection = rand() % 2;
    DisplayWorld(cave, agentRoom, agentDirection);

    /* The game loop */
    while (true)
    {
        /* Get the command */
        printf("Command: ");
        scanf_s("%20s", command, 20);
        if (strcmp(command, "quit") == 0)
        {
            /* Exit, we are doing */
            break;
        }
        else
        {
            printf("I don't know what you are talking about\n");
        }
    }

}

void CreateWorld(int cave[])
{
    /* Initialize cave to empty */
    for (int i = 0; i < ArraySize; i++)
    {
        cave[i] = Empty;
    }

    /* Set the ends */
    cave[0] = End;
    cave[ArraySize - 1] = End;

    int* room;
    /* Get a random empty room and put the Wumpus in it */
    room = GetEmptyRoom(cave);
    *room = Wumpus;

}

int* GetEmptyRoom(int cave[])
{
    int room;

    do
    {
        room = rand() % ArraySize;
    } while (cave[room] != Empty);

    return &cave[room];
}

void DisplayWorld(int cave[], int* agent, int agentDir)
{
    int* room;

    for (room = cave + 1; *room != End; room++)
    {
        switch (*room)
        {
        case Wumpus:
            printf("-W- ");
            break;

        default:
            printf(" .  ");
            break;
        }
    }

    printf("\n");
}