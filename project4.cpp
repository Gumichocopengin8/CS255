/*
 * Keita Nonaka
 * CS255:01
 * 7th: p 387-388 #8.16 (ditto)
 * 2/9/2018
 * c++ 17
 *
 * This is a program to solve mazes.
 * I use array to learn.
 */

#include <iostream>
#include "mazelayout1.h" // header file
using namespace std;

int main(){
    int rat_dir = 0; // rat direction, right 0, down 1, left 2, up 3
    int row = startRow;
    int col = startCol;
    maze[row][col] = '>';

    while(row != endRow || col != endCol) {
        switch (rat_dir) {
            case 0: // right direction
                if(maze[row + 1][col] != '#'){ // down
                    row++;
                    rat_dir = 1;
                } else if(maze[row][col + 1] != '#'){ // right, forward in this case
                    col++;
                    rat_dir = 0;
                } else if(maze[row - 1][col] != '#'){ // up
                    row--;
                    rat_dir = 3;
                } else if(maze[row][col] != '#') // left, go back in this case
                    rat_dir = 2;
                break;
            case 1: // down direction
                if(maze[row][col - 1] != '#'){ // left
                    col--;
                    rat_dir = 2;
                } else if(maze[row + 1][col] != '#'){ // down, forward in this cas
                    row++;
                    rat_dir = 1;
                } else if(maze[row][col + 1] != '#'){ // right
                    col++;
                    rat_dir = 0;
                } else if(maze[row][col] != '#') // up, go back in this case
                    rat_dir = 3;
                break;
            case 2: // left direction
                if(maze[row - 1][col] != '#'){ // up
                    row--;
                    rat_dir = 3;
                } else if(maze[row][col - 1] != '#'){ // left, forward in this cas
                    col--;
                    rat_dir = 2;
                } else if(maze[row + 1][col] != '#'){ // down
                    row++;
                    rat_dir = 1;
                } else if(maze[row][col] != '#') // right, go back in this case
                    rat_dir = 0;
                break;
            case 3: // up direction
                if(maze[row][col + 1] != '#'){ // right
                    col++;
                    rat_dir = 0;
                } else if(maze[row - 1][col] != '#'){ // up, forward in this cas
                    row--;
                    rat_dir = 3;
                } else if(maze[row][col - 1] != '#'){ // left
                    col--;
                    rat_dir = 2;
                } else if(maze[row][col] != '#') // down, go back in this case
                    rat_dir = 1;
                break;
        }
        if(maze[row][col] == '.')  // replacing
            maze[row][col] = '*';
        else if(maze[row][col] == '*')
            maze[row][col] = '~';

        for(int i = 0; i < 12; i++){  // output the result
            for(int j = 0; j < 12; j++)
                cout << maze[i][j];
            cout << endl;
        }
        cout << endl;
    }
    maze[row][col] = '>';
    for(int i = 0; i < 12; i++){  // output the result
        for(int j = 0; j < 12; j++)
            cout << maze[i][j];
        cout << endl;
    }
}
