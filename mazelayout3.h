//
// Created by Keita Nonaka on 2/7/18.
//

#ifndef CS255_MAZELAYOUT3_H
#define CS255_MAZELAYOUT3_H

#endif //CS255_MAZELAYOUT3_H

//Establish fixed maze '#' is a wall, '.' is a path
char maze[12][12] = {
        { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' },
        { '#', '.', '.', '.', '#', '.', '.', '#', '.', '.', '.', '#' },
        { '#', '.', '#', '.', '#', '.', '#', '#', '.', '#', '.', '#' },
        { '#', '#', '#', '.', '#', '.', '.', '.', '.', '#', '.', '#' },
        { '#', '.', '.', '.', '.', '#', '.', '#', '.', '#', '.', '#' },
        { '#', '.', '#', '#', '.', '#', '.', '#', '.', '#', '.', '#' },
        { '#', '.', '.', '#', '.', '#', '.', '#', '.', '#', '#', '#' },
        { '#', '#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '.' },
        { '#', '.', '.', '.', '.', '.', '.', '#', '.', '#', '.', '#' },
        { '#', '#', '.', '#', '#', '#', '.', '#', '.', '#', '.', '#' },
        { '.', '.', '.', '.', '.', '#', '.', '#', '.', '.', '.', '#' },
        { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' }
};

//set starting and ending points DIFFERENT!
int startRow = 10;
int startCol = 0;
int endRow = 7;
int endCol = 11;