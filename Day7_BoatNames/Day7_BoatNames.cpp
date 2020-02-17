/* Kevin Wingert 
   CSCI 182 Boat Names Assignment
   2/16/2020
   Did assignment with Landon
*/


#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

#define MAX_BOAT_COUNT 30

using namespace std;

struct Boat {
	int nYearBuilt;
	string Name;
};

string BoatNames;

int main()
{


	// Start by reading in the files
	ifstream inFile;

	inFile.open("BoatNames.txt");
	if (!inFile) {
		cout << "Unable to open file";
		exit(1); // terminate with error
	}


	Boat Fleet[MAX_BOAT_COUNT];

	// Put all the boat names into an array, then print them to the screen
		char tempName[80];
		int nYear;
		int importCount = 0;

	// Read the input file for each player
	while (!inFile.eof() && importCount < MAX_BOAT_COUNT) {
		// Read in line
		inFile >> tempName >> nYear;

		// Write to Fleet's Structure here
		Fleet[importCount].Name = tempName;
		Fleet[importCount].nYearBuilt = nYear;

		importCount++;
	}
	// Close the input file
	inFile.close();

	// Now, print out each boat name by calling a
	// function to print each array item
	for (int i = 0; i <= MAX_BOAT_COUNT; i++)
	{
		cout << Fleet[i].Name << Fleet[i].nYearBuilt << endl;
	}


}
