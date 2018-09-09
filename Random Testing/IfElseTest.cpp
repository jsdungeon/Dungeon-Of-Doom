#include <stdio.h>

int roomNumber;
int roomCounter;
int roomSwitch(int roomNumber);
char key[0];

main()
{
    printf("You are in room number %i\n", roomNumber);
    printf("Your exits are to the east and the south\n");
    printf("Make a choice\n");
    scanf("%s", key[0]);
    while (roomCounter == 0){
         if (key[0] == 'e'){
        roomCounter += 1;
        printf("\nYou are in room number %i\n", roomCounter);
        printf("In the Blue room\n");
        printf("You can go east, west or south\n");
        printf("Pick your direction\n");
         }
   else if (key[0] == 's'){
        roomCounter +=3;
        printf("\nYou are in room number %i\n", roomCounter);
        printf("In the Blue room\n");
        printf("You can go east, west or south\n");
        printf("Pick your direction\n");
    }
      while (key[0] != 'e'){
        printf("Invalid direction.  Try again\n");
        scanf("%s", key[0], 1);
       }

}

        return 0;
 }


        int roomSwitch(int roomNumber)

        {
         switch(roomNumber)

    {
         case 0:
         roomNumber = 0;
         printf("\nYou are in room number %i\n", roomNumber);
        printf("In the Indigo room\n");
        printf("You can go east or south\n");
        printf("Pick your direction\n");
        scanf("%s", key, 1);

        while (key[0] == 'e' && roomNumber == 0)
     {
        roomNumber = 1;
        roomSwitch(roomNumber);
     }

     while (key[0] == 's' && roomNumber == 0)
     {
        roomNumber = 3;
        roomSwitch(roomNumber);
        scanf("%s", key, 1);
        break;
     }
        case 1:
        printf("\nYou are in room number %i\n", roomNumber);
        printf("In the Blue room\n");
        printf("You can go east, west or south\n");
       printf("Pick your direction\n");
        scanf("%s", key, 1);
        if (key[0] == 'w' && roomNumber == 1)
     {
        roomNumber = 0;
        roomSwitch(roomNumber);
        scanf("%s", key, 1);
     }


  else if (key[0] == 'e' && roomNumber == 1)
    {
        roomNumber = 2;
        roomSwitch(roomNumber);
        scanf("%s", key, 1);
     }


    else if (key[0] == 's' && roomNumber == 1)
    {
        roomNumber = 4;
        roomSwitch(roomNumber);
        scanf("%s", key, 1);
        break;
     }

        case 2:
       printf("\nYou are in room number %i\n", roomNumber);
        printf("In the Red room\n");
        printf("You can go west or south\n");
        printf("Pick your direction\n");
        scanf("%s", key, 1);
        if (key[0] == 's' && roomNumber == 2)
    {
        roomNumber = 5;
        roomSwitch(roomNumber);
        scanf("%s", key, 1);
     }

  else if (key[0] == 'w' && roomNumber == 2)
    {
        roomNumber = 1;
        roomSwitch(roomNumber);
        scanf("%s", key, 1);
     }
        break;
    case 3:
        printf("\nYou are in room number %i\n", roomNumber);
        printf("In the White room\n");
        printf("You can go north, south or east\n");
        printf("Pick your direction\n");
        scanf("%s", key, 1);
        if (key[0] == 's' && roomNumber == 3)
     {
        roomNumber = 6;
        roomSwitch(roomNumber);
        scanf("%s", key, 1);
     }

   else if (key[0] == 'n' && roomNumber == 3)
     {
        roomNumber = 0;
        roomSwitch(roomNumber);
        scanf("%s", key, 1);
     }

   else if (key[0] == 'e' && roomNumber == 3)
     {
        roomNumber = 4;
        roomSwitch(roomNumber);
        scanf("%s", key, 1);
        break;
     }

    case 4:
        printf("\nYou are in room number %i\n", roomNumber);
        printf("In the Pink room\n");
        printf("You can go north, south, east or west\n");
        printf("Pick your direction\n");
        scanf("%s", key, 1);
        if (key[0] == 'n' && roomNumber == 4)
     {
        roomNumber = 1;
        roomSwitch(roomNumber);
        scanf("%s", key, 1);
     }

   else if (key[0] == 's' && roomNumber == 4)
     {
        roomNumber = 7;
        roomSwitch(roomNumber);
        scanf("%s", key, 1);
     }

   else if (key[0] == 'e' && roomNumber == 4)
     {
        roomNumber = 3;
        roomSwitch(roomNumber);
        scanf("%s", key, 1);
     }

    else if (key[0] == 'w' && roomNumber == 4)
     {
        roomNumber = 5;
        roomSwitch(roomNumber);
        scanf("%s", key, 1);
     }
        break;
   case 5:
        printf("\nYou are in room number %i\n", roomNumber);
        printf("In the Green room\n");
        printf("You can go north, south or west\n");
        printf("Pick your direction\n");
        scanf("%s", key, 1);
        if (key[0] == 'n' && roomNumber == 5)
    {
        roomNumber = 2;
        roomSwitch(roomNumber);
        scanf("%s", key, 1);
     }

    else if (key[0] == 's' && roomNumber == 5)
    {
        roomNumber = 8;
        roomSwitch(roomNumber);
        scanf("%s", key, 1);
     }

    else if (key[0] == 'w' && roomNumber == 5)
    {
        roomNumber = 4;
        roomSwitch(roomNumber);
        scanf("%s", key, 1);
        break;
     }
    case 6:
    printf("\nYou are in room number %i\n", roomNumber);
        printf("In the Purple room\n");
        printf("You can go north or west\n");
        printf("Pick your direction\n");
        scanf("%s", key, 1);
        if (key[0] == 'n' && roomNumber == 6)
     {
        roomNumber = 3;
        roomSwitch(roomNumber);
        scanf("%s", key, 1);
     }

   else if (key[0] == 'w' && roomNumber == 6)
     {
        roomNumber = 7;
        roomSwitch(roomNumber);
        scanf("%s", key, 1);
     }
        break;
    case 7:
        printf("\nYou are in room number %i\n", roomNumber);
        printf("In the Yellow room\n");
        printf("You can go north, east or west\n");
        printf("Pick your direction\n");
        scanf("%s", key, 1);
        if (key[0] == 'n' && roomNumber == 7)
     {
        roomNumber = 4;
        roomSwitch(roomNumber);
        scanf("%s", key, 1);
     }

   else if (key[0] == 'e' && roomNumber == 7)
     {
        roomNumber = 8;
        roomSwitch(roomNumber);
        scanf("%s", key, 1);
     }

    else if (key[0] == 'w' && roomNumber == 7)
     {
        roomNumber = 6;
        roomSwitch(roomNumber);
        scanf("%s", key, 1);
        break;

    case 8:
        printf("\nYou are in room number %i\n", roomNumber);
        printf("In the Brown room\n");
        printf("You can go north or west\n");
        printf("Pick your direction\n");
        scanf("%s", key, 1);
        if (key[0] == 'w' && roomNumber == 8)
     {
        roomNumber = 7;
        roomSwitch(roomNumber);
        scanf("%s", key, 1);
     }

   else if (key[0] == 'n' && roomNumber == 8)
     {
        roomNumber = 5;
        roomSwitch(roomNumber);
        scanf("%s", key, 1);
        break;
     }
            else if (key[0] == 'w'&& roomNumber == 2)
        {
            roomNumber = 1;
            roomSwitch(roomNumber);
            }
       else if (key[0] == 's'&& roomNumber == 2)
        {
            roomNumber = 5;
            roomSwitch(roomNumber);
            }

    return roomNumber;
    }
        }
    }

