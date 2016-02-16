#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "resultString.h"

using namespace std;


//My resultString.H and resultString.cpp files are buggered. Fix it.


int main()
{

	int         loadingString;
	int         taskNum;

	
	cout << "Enter your TaskList" << endl;
	taskNum = 1;
	string taskItem;

			for (loadingString = 0; loadingString < taskNum; loadingString++)
			{
				taskItem = resultString();
				cout << loadingString + 1 << ": ";
				cout << taskItem << endl;
				taskNum++;
				
				if (taskItem == "complete") {
					break;
				}
			}
			//I DID IT!!
	return 0;
}

//Lets put a GUI on this bitch
