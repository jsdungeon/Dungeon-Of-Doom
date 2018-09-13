namespace MazeCsharp
{
    public class Room
    {
        private int roomNumber;
        public Room(int roomNumber)
        {
            this.roomNumber = roomNumber;
        }

        public Room NorthRoom, EastRoom, SouthRoom, WestRoom;
        public string GetRoomNumber => roomNumber.ToString();

        public void SetDirection(Room northRoom, Room eastRoom, Room southRoom, Room westRoom)
        {
            if (northRoom != null) NorthRoom = northRoom;
            if (eastRoom != null) EastRoom = eastRoom;
            if (southRoom != null) SouthRoom = southRoom;
            if (westRoom != null) WestRoom = westRoom;
        }
    }
}
