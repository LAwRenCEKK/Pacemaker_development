#include "main.h"
#include "FXOS8700Q.h"
#include "mode.h"
#include "paceNow.h"
#include "parameters.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//ANTICIPATED CHANGE: ADD AN EXTRA PARAMETER. THEREFORE THE ARRAY TO WHICH TEMP IS STORED SHOULD BE "N" IN LENGTH, WHERE N IS THE # OF PARAMETERS.

void update () {
  string temp; 				// stores every line of the file into temp (based on parameter arrangement)
  int N;                    //take the value of the number of total parameters
  ifstream myfile ("update.txt");	// object myfile with name of file
  if (myfile.is_open())			// conditional for existance of object
  {
    while ( getline (myfile,temp) )	//continue for every line
    {
      //STORE EVERY LINE INTO AN ARRAY (SECRET)
	float parameters [N];		// initialize array length N
	int position = 0;		// position variable to assign to array
	parameters [position] = (float)temp;	// allocate parameter to position in array
	position += 1;		    // to allocate the next position
    }
    myfile.close();			// proper format

  }

  else cout << "Unable to open file";
}

void parameterSet(){ // sets values of all parameters, basically initilises variables
    int RC = RecT; // required for voor but RecT needs to be set first using array
    int IC = ReaT;

}

int* getArray() {   //return the parameter from the update function
                //NOTE: This has to be a pointer return since in C++ you cant return arrays
    return parameters;

}

int getLength() {
    return sizeof(parameters);
}
