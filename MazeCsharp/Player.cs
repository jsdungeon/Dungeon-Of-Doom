using System.Collections.Generic;

namespace MazeCsharp
{
    public class Player
    {
        private Room CurrentRoom;

        /// <summary>
        /// Get avilable direction.
        /// </summary>
        /// <returns></returns>
        public List<Room> AvailableDirection()
        {
            List<Room> result = new List<Room>();

            if (CurrentRoom.NorthRoom != null) result.Add(CurrentRoom.NorthRoom);
            if (CurrentRoom.EastRoom != null) result.Add(CurrentRoom.EastRoom);
            if (CurrentRoom.WestRoom != null) result.Add(CurrentRoom.WestRoom);
            if (CurrentRoom.SouthRoom != null) result.Add(CurrentRoom.SouthRoom);

            return result;
        }

        /// <summary>
        /// Set starting position.
        /// </summary>
        /// <param name="startingRoom"></param>
        internal void StartAtRoom(Room startingRoom)
        {
            CurrentRoom = startingRoom;
        }

        /// <summary>
        /// Print current position.
        /// </summary>
        /// <returns></returns>
        public string CurrentPosition()
        {
            return $"Your are on room number : {CurrentRoom.GetRoomNumber}";
        }

        internal bool MoveToDirection(Direction direction)
        {
            switch (direction)
            {
                case Direction.North:
                    return MoveToRoom(CurrentRoom.NorthRoom);
                case Direction.East:
                    return MoveToRoom(CurrentRoom.EastRoom);
                case Direction.South:
                    return MoveToRoom(CurrentRoom.SouthRoom);
                case Direction.West:
                    return MoveToRoom(CurrentRoom.WestRoom);
                default:
                    return false;
            }
        }

        /// <summary>
        /// Generic form of move function.
        /// </summary>
        /// <param name="targetBlock"></param>
        /// <returns></returns>
        private bool MoveToRoom(Room targetBlock)
        {
            if (targetBlock == null) return false;

            CurrentRoom = targetBlock;
            return true;
        }

        private void MoveNorth()
        {
            if (CurrentRoom.NorthRoom != null)
            {
                CurrentRoom = CurrentRoom.NorthRoom;
            }
        }
    }
}
