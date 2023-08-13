#include <iostream>
#include <vector>
using namespace std;

// Function to check if a player has won horizontally
char checkHorizontal(vector<string>& board) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] != '.' && board[i][0] == board[i][1] && board[i][0] == board[i][2]) {
            return board[i][0];
        }
    }
    return '\0';  // No winner horizontally
}

// Function to check if a player has won vertically
char checkVertical(vector<string>& board) {
    for (int i = 0; i < 3; i++) {
        if (board[0][i] != '.' && board[0][i] == board[1][i] && board[0][i] == board[2][i]) {
            return board[0][i];
        }
    }
    return '\0';  // No winner vertically
}

// Function to check if a player has won diagonally
char checkDiagonal(vector<string>& board) {
    if (board[0][0] != '.' && board[0][0] == board[1][1] && board[0][0] == board[2][2]) {
        return board[0][0];
    }
    if (board[0][2] != '.' && board[0][2] == board[1][1] && board[0][2] == board[2][0]) {
        return board[0][2];
    }
    return '\0';  // No winner diagonally
}

// Function to determine the result of the tic-tac-toe game
string determineResult(vector<string>& board) {
    // Check horizontal, vertical, and diagonal wins
    char horizontalWinner = checkHorizontal(board);
    if (horizontalWinner != '\0') {
        return string(1, horizontalWinner);
    }
    
    char verticalWinner = checkVertical(board);
    if (verticalWinner != '\0') {
        return string(1, verticalWinner);
    }
    
    char diagonalWinner = checkDiagonal(board);
    if (diagonalWinner != '\0') {
        return string(1, diagonalWinner);
    }
    
    // Check for a draw
    for (int i = 0; i < 3; i++) {
        if (board[i].find('.') != string::npos) {
            return "DRAW";  // Found an empty cell, not a draw yet
        }
    }
    
    return "DRAW";  // No empty cells, it's a draw
}

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        vector<string> board(3);
        for (int j = 0; j < 3; j++) {
            cin >> board[j];
        }
        
        string result = determineResult(board);
        cout << result << endl;
    }
    
    return 0;
}
