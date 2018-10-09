/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Ulrich
 *
 * Created on 28. September 2018, 09:58
 */

#include <stdio.h>
#include <string.h>

int playerInRoomNumber = 0;
char direction;
int checkdir;
//int a=c-’0’;
#define FALSE 0
#define TRUE 1

struct RoomInfo {
   char  title[50];
   char  description[200];
   char  hiddenItems[100];
   int   roomNr;
   int   north;
   int   northExit;
   int   east;
   int   eastExit;
   int   south;
   int   southExit;
   int   west;
   int   westExit;
   int   up;
   int   upExit;
   int   down;
   int   downExit;
   int   monster;
   int   otherPlayer;
}rooms[8];

int main( ) {

   /*struct RoomInfo rooms[0];        /* Create 8 rooms with 0 as values and no text */
for(int i=0;i<8;i++ ){
    strcpy(rooms[i].title,"");
   strcpy(rooms[i].description,"");
   strcpy(rooms[i].hiddenItems,"");
    rooms[i].roomNr = 0;
   rooms[i].north = 0;
   rooms[i].northExit = 0;
   rooms[i].east = 0;
   rooms[i].eastExit = 0;
   rooms[i].south= 0;
   rooms[i].southExit= 0;
   rooms[i].west= 0;
   rooms[i].westExit= 0;
   rooms[i].up= 0;
   rooms[i].upExit= 0;
   rooms[i].down= 0;
   rooms[i].downExit= 0;
   rooms[i].monster= 0;
   rooms[i].otherPlayer= 0;


}

   /* room 0 specification */
   strcpy( rooms[0].title, "The room where all starts");
   strcpy( rooms[0].description, "You are standing on a meadow. A light wind is blowing gently into your face. You can see a forest line in the East & Soouth ");
   strcpy( rooms[0].hiddenItems, "sign");
   rooms[0].roomNr = 0;
   rooms[4].north = 0;
   rooms[4].northExit = 0;
   rooms[0].east = 1;
   rooms[0].eastExit = 1;


   /* room 1 specification */
   strcpy( rooms[1].title, "Approaching the forest");
   strcpy( rooms[1].description, "You are standing on a meadow. A light wind is blowing gently into your face. You can see the trees of a dark forest line in the South. You can seen an old narrow path in the grass. ");
   strcpy( rooms[1].hiddenItems, "rotten broken sign");
   rooms[1].roomNr = 1;
   rooms[1].south = 1;
   rooms[1].southExit = 4;

      /* room 1 specification */
   strcpy( rooms[2].title, "Approaching the forest");
   strcpy( rooms[2].description, "You are standing on a meadow. You are entering a dark forest. The old narrow path is continuing inside the forest. ");
   strcpy( rooms[2].hiddenItems, "broken knife, the blade is lost");
   rooms[2].roomNr = 2;
   rooms[2].south = 1;
   rooms[2].southExit = 5;

      /* room 1 specification */
   strcpy( rooms[3].title, "Inside the forest");
   strcpy( rooms[3].description, "You are inside the dark forest. You can hear some trucs breaking in the distance. The old narrow path is continuing inside the forest. ");
   strcpy( rooms[3].hiddenItems, "a big lightly glowing mushroom");
   rooms[3].roomNr = 3;
   rooms[3].north = 1;
   rooms[3].northExit = 6;
   rooms[3].east = 1;
   rooms[3].eastExit = 4;
   rooms[3].south = 1;
   rooms[3].southExit = 6;

      /* room 1 specification */
   strcpy( rooms[4].title, "Inside the forest");
   strcpy( rooms[4].description, "You are standing on a clearing. A light wind is blowing gently into your face. You can see the trees of a dark forest surrounding the clearing. You can leave in any direction. ");
   strcpy( rooms[4].hiddenItems, "some old bleached bones");
   rooms[4].roomNr = 4;
   rooms[4].north = 1;
   rooms[4].northExit = 1;
   rooms[4].east = 1;
   rooms[4].eastExit = 5;
   rooms[4].south = 1;
   rooms[4].southExit = 4;
   rooms[4].west = 1;
   rooms[4].westExit = 3;

      /* room 1 specification */
   strcpy( rooms[5].title, "Inside the forest");
   strcpy( rooms[5].description, "You are standing on a meadow. A light wind is blowing gently into your face. You can see the trees of a dark forest line in the South. You can seen an old narrow path in the grass. ");
   strcpy( rooms[5].hiddenItems, "heavily used wooden shield");
   rooms[5].roomNr = 5;
   rooms[5].south = 1;
   rooms[5].southExit = 8;
   rooms[5].west = 1;
   rooms[5].westExit = 4;

      /* room 1 specification */
   strcpy( rooms[6].title, "Inside the forest");
   strcpy( rooms[6].description, "You are deep inside the black forest. You hear some animals growling in the distance. You can't see the old narrow path anymore. In the south and west you can see a steep mountain rising. ");
   strcpy( rooms[6].hiddenItems, "some copper coins");
   rooms[6].roomNr = 6;
   rooms[6].north = 1;
   rooms[6].northExit = 3;
   rooms[6].east = 1;
   rooms[6].eastExit = 7;

      /* room 1 specification */
   strcpy( rooms[7].title, "Approaching the forest");
   strcpy( rooms[7].description, "You are standing inside the forest. Theres is nothing special about this place. ");
   strcpy( rooms[7].hiddenItems, "a tree with a carving");
   rooms[7].roomNr = 7;
   rooms[7].east = 1;
   rooms[7].eastExit = 8;
   rooms[7].west = 0;
   rooms[7].westExit = 8;

      /* room 1 specification */
   strcpy( rooms[8].title, "Approaching the forest");
   strcpy( rooms[8].description, "You are standing on a meadow. A light wind is blowing gently into your face. You can see the trees of a dark forest line in the South. You can seen an old narrow path in the grass. ");
   strcpy( rooms[8].hiddenItems, "rotten broken sign");
   rooms[8].roomNr = 8;
   rooms[8].west = 1;
   rooms[8].westExit = 7;

   /*End of room declaration*/

   /* Print room info */
   printf( "You are in room number : %d\n", rooms[playerInRoomNumber].roomNr);
   printf( "%s\n", rooms[playerInRoomNumber].description);

   /* do while loop to walk through the dungeon */

    /* do loop execution */
    do
    {


    /* if else walk-trough the rooms */
    /*
    if (rooms[playerInRoomNumber].north == 1)
    {printf("You can go north\n\n");}
    if (rooms[playerInRoomNumber].east == 1)
    {printf("You can go east\n\n");}
    if (rooms[playerInRoomNumber].south == 1)
    {printf("You can go south\n\n");}
    if (rooms[playerInRoomNumber].west == 1)
    {printf("You can go west\n\n");}
    if (rooms[playerInRoomNumber].up == 1)
    {printf("You can go up\n\n");}
    if (rooms[playerInRoomNumber].down == 1)
    {printf("You can go down\n\n");}
    */
    printf("Where do you want to go: ");
    scanf("%c", &direction);


    if (direction == 'n')
    {   int check = rooms[playerInRoomNumber].north;
        int checkdir = 1;

    if (check == 1 && checkdir == 1)
   {
	printf("You went north\n");
	playerInRoomNumber = rooms[playerInRoomNumber].northExit;
	printf("%s\n\n",rooms[playerInRoomNumber].description);
	if (rooms[playerInRoomNumber].north == 1)
    {printf("You can go north\n\n");}
    if (rooms[playerInRoomNumber].east == 1)
    {printf("You can go east\n\n");}
    if (rooms[playerInRoomNumber].south == 1)
    {printf("You can go south\n\n");}
    if (rooms[playerInRoomNumber].west == 1)
    {printf("You can go west\n\n");}
    if (rooms[playerInRoomNumber].up == 1)
    {printf("You can go up\n\n");}
    if (rooms[playerInRoomNumber].down == 1)
    {printf("You can go down\n\n");}
   }
   }
   else if (direction == 'e')
   {int check = rooms[playerInRoomNumber].east;
    int checkdir = 1;

    if (check == 1 && checkdir == 1)
   {
	printf("You went east\n");
	playerInRoomNumber = rooms[playerInRoomNumber].eastExit;
	printf("%s \n\n",rooms[playerInRoomNumber].description);

	if (rooms[playerInRoomNumber].north == 1)
    {printf("You can go north\n\n");}
    if (rooms[playerInRoomNumber].east == 1)
    {printf("You can go east\n\n");}
    if (rooms[playerInRoomNumber].south == 1)
    {printf("You can go south\n\n");}
    if (rooms[playerInRoomNumber].west == 1)
    {printf("You can go west\n\n");}
    if (rooms[playerInRoomNumber].up == 1)
    {printf("You can go up\n\n");}
    if (rooms[playerInRoomNumber].down == 1)
    {printf("You can go down\n\n");}
   }
   }
  else if (direction == 's')
   {int check = rooms[playerInRoomNumber].south;
    int checkdir = 1;

    if (check == 1 && checkdir == 1)
   {
	printf("You went south\n");
	playerInRoomNumber = rooms[playerInRoomNumber].southExit;
	printf("%s\n\n",rooms[playerInRoomNumber].description);

	if (rooms[playerInRoomNumber].north == 1)
    {printf("You can go north\n\n");}
    if (rooms[playerInRoomNumber].east == 1)
    {printf("You can go east\n\n");}
    if (rooms[playerInRoomNumber].south == 1)
    {printf("You can go south\n\n");}
    if (rooms[playerInRoomNumber].west == 1)
    {printf("You can go west\n\n");}
    if (rooms[playerInRoomNumber].up == 1)
    {printf("You can go up\n\n");}
    if (rooms[playerInRoomNumber].down == 1)
    {printf("You can go down\n\n");}
   }
   }
  else if (direction == 'w')
   {int check = rooms[playerInRoomNumber].west;
    int checkdir = 1;

    if (check == 1 && checkdir == 1)
   {
	printf("You went west\n");
	playerInRoomNumber = rooms[playerInRoomNumber].westExit;
	printf("%s\n\n",rooms[playerInRoomNumber].description);

	if (rooms[playerInRoomNumber].north == 1)
    {printf("You can go north\n\n");}
    if (rooms[playerInRoomNumber].east == 1)
    {printf("You can go east\n\n");}
    if (rooms[playerInRoomNumber].south == 1)
    {printf("You can go south\n\n");}
    if (rooms[playerInRoomNumber].west == 1)
    {printf("You can go west\n\n");}
    if (rooms[playerInRoomNumber].up == 1)
    {printf("You can go up\n\n");}
    if (rooms[playerInRoomNumber].down == 1)
    {printf("You can go down\n\n");}
   }
   }
   else
   {
	printf("Hm you should not see this - strange.\n");
   }

    printf("You entered: %c\n\n===================\n", direction);
    }

 while( direction != 'x' );

   return 0;
}

