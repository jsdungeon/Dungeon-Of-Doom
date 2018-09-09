#include <stdio.h>

char roomKey[1];

int roomNumber = 0;
int roomCounter = 0;

/*This program will try to navigate through a 3x3 maze.  Starting at square 0 in the top left.

It needs two functions:

RoomMovement - To check the direction key pressed and if the exit is found, move to that room.
RoomNumber - To give the details of each room and available exits.

*/

main() {
{
    printf("You are in a 3 x 3 maze\n");
    printf("You are currently in room %i\n", roomNumber);
    printf("What direction do you want to go in?\n");
    printf("You can go east or south\n");
    scanf("%s", roomKey,1);{
        if (roomNumber == 0){

            if (roomKey[0] == 'e'){
        printf("\nYou went east\n");
        roomNumber += 1; //Room 1 of 8
        printf("You are currently in room %i\n", roomNumber);
        printf("What direction do you want to go in?\n");
        printf("You can go south or east\n");
        scanf("%s", roomKey,1);
        if (roomKey[0] == 's'){
            printf("You went south\n");
            roomNumber += 3; //room number is now 4
            printf("You are currently in room %i\n", roomNumber);
            printf("What direction do you want to go in?\n");
            printf("You can go north, south or east.\n");
            scanf("%s", roomKey,1);
                if (roomKey[0] == 'n'){
                    printf("You went north");
                    roomNumber += 1; //Room number is 5
                    printf("You are currently in room %i\n", roomNumber);
                    printf("What direction do you want to go in?\n");
                    printf("You can go north, south or west\n");
                    scanf("%s", roomKey,1);
                }
                     if (roomKey[0] == 's'){
                     printf("You went south");
                     roomNumber += 3; //Room number is 8
                     printf("You are currently in room %i\n", roomNumber);
                     printf("What direction do you want to go in?\n");
                     printf("You can go north or west\n.");
                     scanf("%s", roomKey,1);
                }
                else if (roomKey[0] = 'w'){
                    printf("You went west");
                     roomNumber -= 1; //Room number is 7
                     printf("You are currently in room %i\n", roomNumber);
                     printf("What direction do you want to go in?\n");
                     printf("You can go east or west\n.");
                     scanf("%s", roomKey,1);
                        if (roomKey[0] == 'e'){
                            printf("You went east");
                            roomNumber += 1; //Room number is 8
                            printf("You are currently in room %i\n", roomNumber);
                            printf("What direction do you want to go in?\n");
                            printf("You can go north or west\n.");
                            scanf("%s", roomKey,1);
                        }
                }


                }
        }
        else if (roomKey[0] == 'e'){
            printf("You went east\n");
            roomNumber += 1; //room number is now 2
            printf("What direction do you want to go in?\n");
            printf("You can go east or south\n.");
            scanf("%s", roomKey,1);
                if (roomKey[0] == 'e'){
                    roomNumber += 1; //room number is now 3
                    printf("What direction do you want to go in?\n");
                    printf("You can go north or east\n.");
                    scanf("%s", roomKey,1);
                        if (roomKey[0] == 'n'){
                            roomNumber -= 3; //room number is now 0
                        }
                }

        }
    }
        else if (roomKey[0] == 's'){
            printf("\nYou went south\n");
        }

    }

}



        }

return 0;
    }
