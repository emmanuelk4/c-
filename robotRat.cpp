#include <C:\Users\Admin\Desktop\c++\robotRat.h>
#include <iostream>
#include <stdlib.h>

/*************************************
   FILE SCOPE VARIABLE DECLARATIONS
   
*************************************/
namespace robotRat {
   static bool floor[ROWS][COLS] = {};
   static PenPosition pen_Position = UP;
   static Direction rats_Direction = EAST;
   static int current_Row = 0;
   static int current_Col = 0;
}
/************************************/
void displayMenu() {
   cout << " 1. Pen Up\n";
   cout << " 2. Pen down\n";
   cout << " 3. Turn right\n";
   cout << " 4. Turn left\n";
   cout << " 5. Move\n";
   cout << " 6. Print floor\n";
   cout << " 7. Exit\n"; 
}
void setPenUp() {
   robotRat :: pen_Position = UP;
}
void setPenDown() {
   robotRat :: pen_Position = DOWN;
}
void turnRight() {
   switch(robotRat :: rats_Direction) {   
   case NORTH:robotRat :: rats_Direction = EAST;
              break;
   case EAST: robotRat :: rats_Direction = SOUTH; 
              break;
   case WEST: robotRat :: rats_Direction = WEST;
              break;
   case SOUTH: robotRat :: rats_Direction = NORTH;
              break;
   default:    robotRat :: rats_Direction = EAST;
   }
}
void turnLeft() {
switch(robotRat :: rats_Direction) {
   case NORTH:robotRat :: rats_Direction = WEST;
              cout << "Facing West\n";
              break;
   case EAST: robotRat :: rats_Direction = NORTH; 
              cout << "Facing North\n";
              break;
   case WEST: robotRat :: rats_Direction = EAST;
              cout << "Facing East\n";
              break;
   case SOUTH:robotRat :: rats_Direction = SOUTH;
              cout << "Facing South\n";
              break;
   default:   robotRat :: rats_Direction = EAST;
              cout << "Facing East\n";                   
}
}
void move() {
   int spaces = 0;
   cout << "How many spaces?:\n";
   cin >> spaces;
   
   switch(robotRat :: pen_Position) {
   case UP: switch(robotRat :: rats_Direction) {
      case NORTH: if(robotRat :: current_Row - spaces) {
                     robotRat :: current_Row -= spaces;
                     } else {
                     robotRat :: current_Row = 0;
                     }
                     break;
      case SOUTH: if((robotRat :: current_Row + spaces) < ROWS) {
                     robotRat :: current_Row += spaces;
                     } else {
                     robotRat :: current_Row = ROWS - 1;
                     }
                     break;
      case EAST: if((robotRat :: current_Row + spaces) < COLS) {
                     robotRat :: current_Row += spaces;
                     } else {
                     robotRat :: current_Col = COLS - 1;
                     }
                     break;
      case WEST: if(robotRat :: current_Row - spaces) {
                     robotRat :: current_Row -= spaces;
                     } else {
                     robotRat :: current_Col = 0;
                     }
                     break;
      default : ;
      }
      break;
   }
}
void printFloor() {
   
   setTestPattern();
   
   for(int i = 0; i < ROWS; i++) {
      for(int j = 0; j < COLS; j++) {
         if(robotRat :: floor[i][j]) {
            cout << "[-]";
            } else {
               cout << "[ ]";
            }            
      }
      cout<< "\n";
   }
}
void programExit() {
   exit(0);
}
void doDefault() {
   cout << "Please enter a valid menu choice!\n";
}

void setTestPattern() {
   robotRat :: floor[0][0] = true;
   robotRat :: floor[0][1] = true;
   robotRat :: floor[0][2] = true;
   robotRat :: floor[0][3] = true;
   robotRat :: floor[1][3] = true;
   robotRat :: floor[2][3] = true;
   robotRat :: floor[3][3] = true;
   robotRat :: floor[4][3] = true;
   robotRat :: floor[5][3] = true;
}

void processMenuChoice() {
   char input;
   cout << "Please Enter menu choice: ";
   cin >> input; 
   switch(input) {
   case '1': setPenUp();
            break;
   case '2':setPenDown();
            break;
   case '3':turnRight();
            break;
   case '4':turnLeft();
            break;
   case '5':move();
            break;
   case '6':printFloor();
            break;
   case '7':programExit();
            break;
   default : doDefault();
   }
}