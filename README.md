# Tic Tac Toe Game

## Overview

This is a simple console-based Tic Tac Toe game written in C++. The game allows two players to take turns playing Tic Tac Toe on a 3x3 grid. The game board is displayed after every move, and the winner is announced once a player wins or the game ends in a draw.

## Features

- Two players can play against each other.
- The game board is displayed after each move.
- The game detects a win or draw and announces the result.
- Player names are customizable.


 ## Usage

   - Start the Game:

  - The program will prompt you to enter the names of the first and second players.

- Make a Move:

  -   Players take turns to choose a number corresponding to the grid position where they want to place their mark (X or O). For example, choosing 1 will place the mark in the top-left corner of the grid.

     - The game continues until a player wins or all positions are filled, resulting in a draw.

  -  The game will display the result, indicating which player won or if the game is a draw.

## Code Structure

   - displayGrid(): Displays the current state of the game board.
   - playerTurn(): Handles the player's turn and updates the game board.
   -  gamedraw(): Checks for a win, draw, or continuation of the game.
   - verify(): Announces the winner and game developer information.
