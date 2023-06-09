#include <stdio.h>
#include "rendering.h"
#include "map.h"
#include "game.h"

void render_game() {
    // Render the game based on the map
    for (int z = 0; z < MAP_DEPTH; z++) {
        for (int y = 0; y < MAP_HEIGHT; y++) {
            for (int x = 0; x < MAP_WIDTH; x++) {
                if (map_is_wall(x, y, z)) {
                    printf("#");
                } else {
                    printf(".");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}
