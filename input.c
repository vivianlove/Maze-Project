#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

void move_forward();
void move_backward();
void strafe_left();
void strafe_right();

void handle_input() {
    int key = getch();

    if (key == KEY_UP) {
        move_forward();
    } else if (key == KEY_DOWN) {
        move_backward();
    } else if (key == KEY_LEFT) {
        strafe_left();
    } else if (key == KEY_RIGHT) {
        strafe_right();
    }
}

void handle_key_press() {
    while (1) {
        handle_input();
    }
}
