// Author: Dustin Nastaj
// Date: 3/30/2025
// Version: 1.0.0
// Purpose: To create an ASCII Tic-Tac-Toe game. This game will create a 3 x 3 board
// as well as assign two players. The players will take turns choosing a "mark"
//
//
// Tic-Tac-Toe Game
//
//         (1)    (2)   (3)
//
//  (A)     X   |     |  O
//        ------------------
//  (B)     X   |  O  |
//        ------------------
//  (C)     X   |     |
//
//
// Create board
// Assign two players (PvP or PvC)
// Select X or O
// Select player at random
// Game loop, select board squares
// Validate the move (make sure space isn't filled already)
// Update the board with latest move
// Check win condition
// When a win happens, display winning result and information
// Ask to start another game?


#include <algorithm>
#include <iostream>
#include <ranges>
#include <string>

using namespace std;

int main() {
    // While loop to keep the game loop going
    while (true) {
        string answer; // Start new game answer variable

        cout << "Tic-Tac-Toe!" << endl;

        game.play(); // The main game loop

        // While loop to check if start a new game
        while (true) {
            cout << "Start another game?" << endl;
            cin >> answer;
            std::transform(answer.begin(), answer.end(), answer.begin(), [](unsigned char c) {
            return std::toupper(c);
            });
            if (answer == "YES") {
                break; // Starts the game over again
            }
            if (answer == "NO") {
                return 0; // Ends the program
            }
            // If YES or NO are not entered, will prompt and ask for input again
                cout << "Please answer 'Yes' or 'No'" << endl;
            }
        }
        return 0;
    }