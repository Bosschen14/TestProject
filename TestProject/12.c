//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//#include <time.h>
//#include <string.h>
///*
// * Name :  <insert name here>
// *
// * Simple Wumpus game in 1D
//*/
//
///* Add any #defines here */
//
//
///* Add any function prototypes here */
//
///* Id's for things in our Cave */
//#define Empty 0
//#define Wumpus 1
//#define End 2
///* Number of rooms in our Cave */
//#define CaveSize 20
//#define ArraySize (CaveSize + 2)
//
//int cave[ArraySize];
//int* agentRoom;
//
//int agentDirection;
//
//void DisplayWorld(int cave[], int* agent, int agentDir);
//int* GetEmptyRoom(int cave[]);
//void CreateWorld(int cave[]);
//
//
///* Directions I can face */
//#define Left 0
//#define Right 1
//
//
//
//
//
//int* GetEmptyRoom(int cave[])
//{
//    int room;
//
//    do
//    {
//        
//        room = rand() % (ArraySize - 2) + 1;
//        printf("rand%d\n", room);
//    } while (cave[room] != Empty);
//
//    return &cave[room];
//}
//
//void DisplayWorld(int cave[], int* agent, int agentDir)
//{
//    int* room;
//    
//    //printf("%d", *cave);
//
//    for (room = cave + 1; *room != End; room++)
//        {
//            if (room == agent)
//            {
//                switch (agentDir)
//                {
//                case Left:
//                    printf("<A  ");
//                    break;
//
//                case Right:
//                    printf(" A> ");
//                }
//
//                continue;
//            }
//
//            switch (*room)
//            {
//            case Wumpus:
//                printf("-W- ");
//                break;
//
//            default:
//                printf(" .  ");
//                break;
//            }
//        }
//
//        printf("\n");
// }
//void CreateWorld(int cave[])
//{
//    int i;
//    int* room;
//
//    /* Initialize cave to empty */
//    for (i = 0; i < ArraySize; i++)
//    {
//        cave[i] = Empty;
//    }
//
//    /* Set the ends */
//    cave[0] = End;
//    cave[ArraySize - 1] = End;
//
//    /* Get a random empty room and put the Wumpus in it */
//
//    room = GetEmptyRoom(cave);
//    *room = Wumpus;
//}
//
//
//int main()
//{
//
//    char command[20];
//    /* Seed the random number generator */
//    srand((unsigned int)time(NULL));
//
//    agentRoom = GetEmptyRoom(cave);
//    agentDirection = rand() % 2;
//
//
//    /* The game loop */
//    while (true)
//    {
//        DisplayWorld(cave, agentRoom, agentDirection);
//        /* Get the command */
//        printf("Command: ");
//        scanf_s("%20s", command, 20);
//        if (strcmp(command, "quit") == 0)
//        {
//            /* Exit, we are doing */
//            break;
//        }
//        else
//        {
//            printf("I don't know what you are talking about\n");
//        }
//    }
//
//}
