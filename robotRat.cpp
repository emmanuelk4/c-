#include <C:\Users\Admin\Desktop\c++\robotRat.h>
#include <iostream>
#include <stdlib.h>

/*************************************
   FILE SCOPE VARIABLE DECLARATIONS
   
*************************************/
namespace robotRat {
   static bool floor[ROWS][COLS] = {};
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
   cout << "The pen is up!\n";
}
void setPenDown() {
   cout << "The pen is down!\n";
}
void turnRight() {
   cout << "Robot Rat turned right!\n";
}
void turnLeft() {
   cout << "Robot rat turned left!\n";
}
void move() {
   cout<< "Robot Rat moved!\n";
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