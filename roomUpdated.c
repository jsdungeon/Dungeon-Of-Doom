#include <stdio.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void room ();
void playerMovement ();
int room0[] = { 0, 0, 1, 0, 0, 0, 0, 0, 0 };
int room1[] = { 1, 0, 0, 1, 1, 0, 0, 0, 0 };
int room2[] = { 2, 0, 0, 1, 0, 0, 0, 0, 0 };
int room3[] = { 3, 1, 1, 1, 0, 0, 0, 0, 0 };
int room4[] = { 4, 1, 1, 1, 1, 0, 0, 0, 0 };
int room5[] = { 5, 0, 0, 1, 1, 0, 0, 0, 0 };
int room6[] = { 6, 1, 1, 0, 0, 0, 0, 0, 0 };
int room7[] = { 7, 0, 1, 0, 1, 0, 0, 0, 0 };
int room8[] = { 8, 0, 0, 0, 1, 0, 0, 0, 0 };
//ROOM = 0
//NORTH = 0
//EAST 1
//SOUTH 1
//WEST 0
//UP 0
//DOWN 0
//MONSTERTYPE 0
//NUMBEROFMONSTERS 0
//FOOD 0
int playerInRoomNumber;
char playerMove;
char playerDirection[1];
int
main (void)
{
  /* TODO: Enter code here */
  //srand(time(NULL)); //for random number generation
  // int playerInRoom = 0;
  int r = rand ();      //random number
  printf ("The Dungeon Of Doom\n\n");
  const int MAX_LEN = 80;
  char playerName[MAX_LEN];
  char exitCondition[4];
  printf ("Enter a your name: \n\n");
  scanf ("%79s", playerName, MAX_LEN);
  printf ("Greetings %s\n\n", playerName);
  room ();          //We call the function here
  playerMovement ();        //We call the player movement function here
  printf ("Enter 'exit' to stop and leave the program: ");
  scanf ("%s", exitCondition);
  if (exitCondition != "exit")
    {
      printf ("Exit");
    }
  return 0;
}
void
fight (void)
// Placeholder function for a future fight function
{
  //fight code goes here / function can receive parameters and return some if necessary
}
void
npc (void)
// Placeholder function for a future npc function
{
  //fight code goes here / function can receive parameters and return some if necessary
}
void
room (void)
//Show the player in which room he is and show the possible exits
{
  int j = 0;
  int n = 0;
  playerInRoomNumber = 0;
  printf ("You are in room number: %d\n\n", playerInRoomNumber);
  printf ("Room Number: %d\n\n", room0[0]);
  for (j = 0; j < 7; j++)
    {
      ;
      printf ("room0[%d] = %d\n", j, room0[j]);
    }
  printf ("Above info is for debugging purpose only.\n\n");
  if (room0[1] == 1)
    {
      printf ("You can go North.\n\n");
    }
  else if (room0[2] == 1)
    {
      printf ("You can go East.\n\n");
    }
  else if (room0[3] == 1)
    {
      printf ("You can go South.\n\n");
    }
  else if (room0[4] == 1)
    {
      printf ("You can go West.\n\n");
    }
  else if (room0[5] == 1)
    {
      printf ("You can go Up.\n\n");
    }
  else if (room0[6] == 1)
    {
      printf ("You can go Down.\n\n");
    }
  else
    {
      printf ("Hm strange there seems to be no exit!");
    }
  printf ("Inside the room function\n\n");
}
void
playerMovement (void)
//Get the input from the player into which room he wants to move and change the variable playerInRoom accordingly
{
  //Ask for initial player movement
  printf ("Where do you want to go ? n,e,s,w,u,d: \n\n");
  //scanf_s("%s", playerDirection);
  const int MAX_LEN = 80;
  scanf ("%s", playerDirection, 1);
  //The IF statements here keep the playing moving.  We can only move East to start
  if (playerDirection[0] = "e" && playerInRoomNumber == 0)
    {               //We moved east
      playerInRoomNumber = 1;   //new Room number (East)
      printf ("You are in room number: %d\n\n", playerInRoomNumber);
      printf ("Where do you want to go next?");
      scanf ("%s", playerDirection, 1);
      //We moved East, now we keep moving according to our available choices
      if (playerDirection[0] = "s")
    {           //We moved south to room 4
      playerInRoomNumber = 4;   //We moved south
      printf ("You are in room number: %d\n\n", playerInRoomNumber);
      printf ("Where do you want to go next?");
      scanf ("%s", playerDirection, 1);
      if (playerDirection[0] = "s")
        {           //We moved south again to room 7
          playerInRoomNumber = 7;   //We move south again to room 7
          printf ("You are in room number: %d\n\n", playerInRoomNumber);
          printf ("Where do you want to go next?");
          scanf ("%s", playerDirection, 1);
        }
    }
    }
  else if (room0[2] == 1)
    {
      printf ("You can go East.\n\n");
    }
  else if (playerDirection[0] = "n" && playerInRoomNumber == 0)   //Room number
    {
      playerInRoomNumber = 0;
      printf ("Sorry, you can't go North");
    }
  else if (playerDirection[0] = "s" && playerInRoomNumber == 0)   //Room number
    {
      playerInRoomNumber = 0;
      printf ("Sorry, you can't go South");
    }
  else if (playerDirection[0] = "w" && playerInRoomNumber == 0)   //Room number
    {
      playerInRoomNumber = 0;
      printf ("Sorry, you can't go West");
    }
  else if (playerDirection[0] = "u" && playerInRoomNumber == 0)   //Room number
    {
      playerInRoomNumber = 0;
      printf ("Sorry, you can't go up");
    }
//Player moved down to room number 3
  else if (playerDirection[0] = "d" && playerInRoomNumber == 0)   //Room number
    {
      playerInRoomNumber = 3;
      printf ("You are in room number: %d\n\n", playerInRoomNumber);
    }
  else if (room0[2] == 1 || room0[3] == 1 || room0[4] == 1)
    //Can go East, South, West
    {
      printf ("You can go East, South, West, \n\n");
    }
}
