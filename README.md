# TicTacToe 🎮

## 2 Player Tic Tac Toe Game 🧩

### Overview 🌟

This application is a **2-player Tic Tac Toe game** written in the **C language**. It allows two players to play the classic Tic Tac Toe game on the same machine. The game uses a simple yet efficient design with an **abstract data type (ADT)** structure consisting of 3 files: `Main.c`, `t.c`, and `t.h`.

### File Structure 📂

The project follows a **3-file topography**:

1. **`Main.c`**: The main program file that contains the game logic and flow.
2. **`t.c`**: Contains the implementation of game functions.
3. **`t.h`**: The header file defining function prototypes and necessary data structures.

### Features 🚀

- **Two-player gameplay**: Play with a friend on the same device.
- **Simple interface**: Minimalistic design with text-based interface.
- **Emoji markers**: Players can use the 🎯 and ❌ symbols to mark their moves.

### How to Play 🎮

1. Download and extract the project files.
2. Compile the C code using a C compiler (`gcc`).
3. Run the program and follow the on-screen instructions.
4. Player 1 uses **❌** and Player 2 uses **🎯**.
5. The game ends when either player wins or the board is full, resulting in a draw.

### Compilation 💻

To compile the project, run the following command:

```bash
gcc -o tictactoe Main.c t.c
