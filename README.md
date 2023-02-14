# sokoban

The project my_sokoban is a game implementation of the classic transport puzzle, "Sokoban" in C using the ncurses library. The game takes a map file as input and consists of characters '#' for walls, 'P' for the player, 'X' for boxes and 'O' for storage locations. The objective of the game is to move the boxes to the storage locations. The game is played in terminal mode using arrow keys (LEFT, RIGHT, UP, DOWN). If all boxes are at storage locations, the player wins and the program returns 0. If none of the boxes can be moved anymore, the player loses and the program returns 1. The game can be reset by pressing the space bar.

Use "./Sokoban -h" for further information.
