# 3D Maze Game

3D Maze Game is a simple maze game implemented using raycasting technique. It is written in C and utilizes the ncurses library for terminal-based rendering.

## Getting Started

### Prerequisites

To compile and run the game, you need to have the following software installed on your system:

- C compiler (e.g., GCC)
- ncurses library

### Installation

1. Clone or download the repository.
2. Make sure you have the ncurses library installed on your system.
   - On Ubuntu, you can install it by running: `sudo apt-get install libncurses-dev`
   - On macOS, you can install it using Homebrew: `brew install ncurses`
   - For other operating systems, please refer to the documentation specific to your system.
3. Compile the source code by executing the following command: `gcc -std=c99 -o game main.c game.c map.c rendering.c input.c utils.c -lncurses`

### Running the Game

1. After successful compilation, run the game by executing the following command: `./game`
2. The game should start, and you will be presented with a 3D maze.
3. Use the arrow keys to navigate through the maze and try to reach the goal.
4. Press 'Q' to quit the game.

## Contributing

Contributions to improve the game are welcome! If you have any suggestions, bug fixes, or feature enhancements, feel free to submit a pull request or open an issue.

## License

This project is licensed under the [MIT License](LICENSE).

## Acknowledgements

This project was inspired by the classic maze games and utilizes the raycasting technique made popular by early 3D games.

## Author

Ezeoru Vivian [ezeoruchinenye@gmail.com]

