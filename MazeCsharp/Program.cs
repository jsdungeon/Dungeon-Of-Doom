using System;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MazeCsharp
{
    class Program
    {
        static void Main(string[] args)
        {
            //Initial room number.
            Room room0 = new Room(0);
            Room room1 = new Room(1);
            Room room2 = new Room(2);
            Room room3 = new Room(3);
            Room room4 = new Room(4);
            Room room5 = new Room(5);
            Room room6 = new Room(6);
            Room room7 = new Room(7);
            Room room8 = new Room(8);

            //Initial block relation.
            //north east south west.
            room0.SetDirection(null, room1, null, null);
            room1.SetDirection(null, room2, room4, null);
            room2.SetDirection(null, null, room5, null);
            room3.SetDirection(room0, room4, room6, null);
            room4.SetDirection(room1, room5, room7, room3);
            room5.SetDirection(null, null, room8, room4);
            room6.SetDirection(room3, room7, null, null);
            room7.SetDirection(null, room8, null, room6);
            room8.SetDirection(null, null, null, room7);

            //Initial 
            Player player = new Player();
            player.StartAtRoom(room0);

            bool exit = false;
            do
            {
                Console.WriteLine($"\n{player.CurrentPosition()}");

                foreach (var item in player.AvailableDirection())
                {
                    Console.WriteLine($"Moveable room number : {item.GetRoomNumber.ToString()}");
                }

                var direction = Console.ReadLine();
                switch (direction)
                {
                    case "n":
                        if (player.MoveToDirection(Direction.North))
                        {
                            continue;
                        }
                        else
                        {
                            Console.WriteLine($"Unable to move {Direction.North.ToString()}");
                        }
                        break;
                    case "e":
                        if (player.MoveToDirection(Direction.East))
                        {
                            continue;
                        }
                        else
                        {
                            Console.WriteLine($"Unable to move {Direction.East.ToString()}");
                        }
                        break;
                    case "s":
                        if (player.MoveToDirection(Direction.South))
                        {
                            continue;
                        }
                        else
                        {
                            Console.WriteLine($"Unable to move {Direction.South.ToString()}");
                        }
                        break;
                    case "w":
                        if (player.MoveToDirection(Direction.West))
                        {
                            continue;
                        }
                        else
                        {
                            Console.WriteLine($"Unable to move {Direction.West.ToString()}");
                        }
                        break;
                    case "q":
                        exit = true;
                        Console.WriteLine("Exit");
                        break;
                    default:
                        Console.WriteLine($"input wrong direction");
                        continue;
                }
            } while (!exit);
        }
    }
}
