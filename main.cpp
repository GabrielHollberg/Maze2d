#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>

#include "Pathfinder.h"

int main() {

	Pathfinder myPathfinder;
	myPathfinder.importMaze("2d.txt");

	/*Pathfinder* pathptr = NULL;//the Pathfinder
	// Test 2D array
	pathptr = new Pathfinder();
	pathptr->importMaze("2D.txt");
	cout << pathptr->toString();
	pathptr->solveMaze();
	exit(0);
	// End of Test 2D array*/

}