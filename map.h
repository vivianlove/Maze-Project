#ifndef MAP_H
#define MAP_H

// Define the dimensions of the map
#define MAP_DEPTH 5
#define MAP_HEIGHT 10
#define MAP_WIDTH 10

// Function declarations
int map_is_wall(int x, int y, int z);
int map_is_open(int x, int y, int z);

#endif /* MAP_H */
