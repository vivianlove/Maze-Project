#include <stdio.h>
#include "game.h"

int main() {
    if (game_init() != 0) {
        printf("Failed to initialize the game.\n");
        return 1;
    }

    while (!game_is_over()) {
        game_update();
        game_render();
        handle_input();
    }

    game_cleanup();

    return 0;
}
