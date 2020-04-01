#ifndef ROBOT_RAT_H
#define ROBOT_RAT_H

const int ROWS = 20;
const int COLS = 20;

enum Direction {NORTH, SOUTH, WEST, EAST};
enum PenPosition {UP, DOWN};

void displayMenu();
void processMenuChoice();
void setPenUp();
void setpenDown();
void turnRight();
void turnLeft();
void move();
void printFloor();
void programExit();
void doDefault();

void setTestPattern();

#endif