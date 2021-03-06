#ifndef _ARRTABLE_h
#define _ARRTABLE_h

#include "library.h"

/*---------- TABLE ----------*/
/* Constructor */
void BuildTable (Table * T, int Room, int i, int j, MapMatrix R);
// "Builds" a table by reading its surroundings at the start of a new game

/* Tests */
boolean IsOccupied (Table T);
// Checks if a table is unoccupied

/*---------- ARRAY OF TABLE ----------*/
/* Constructor */
void InitiateAT (MapMatrix R1, MapMatrix R2, MapMatrix R3, ArrTable * AT);
// Reads the position and capacity of tables from each room's matrix at the start of a new game
void ReadRoom (int Room, MapMatrix R, ArrTable * AT);
// Reads a room's matrix to find and build tables at the start of a game

void ReadCounter (MapMatrix R, ArrCounter *AC, Point *PTray);
/* untuk membuat tabel counter dari matriks peta*/
/* I.S. R terdefinisi*/
/* F.S. AC terisi , PTray (posisi tray) terisi*/

/* Add array element */
void AddTableX (ArrTable * AT, int X, Table T);
// Adds a table to the array at index X

/* Search through array */
int TableNearPlayer (Player P, ArrTable AT);
// Returns index of table closest to player; returns 0 if player is not near a table
int FindEmptyTableFor (Player P, Customer C, ArrTable AT);
// Returns index of empty table in the room; returns 0 if there are no empty tables

/* Determine what happens after 1 tick */
void LessPatientAT (ArrTable * AT);
void CustomersLeave (ArrTable * AT, ArrOrder * AO, int * leavingCusts);
void UpdateAT (ArrTable * AT, ArrOrder * AO, int * leavingCusts);

/* Debugging */
void PrintAT (ArrTable);
// Prints the values inside array with the format

#endif
