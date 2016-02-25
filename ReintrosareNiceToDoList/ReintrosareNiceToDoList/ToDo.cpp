#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "resultString.h"
#include <Windows.h>
#include <list>
#include "resource.h"


using namespace std;
class TaskObject;
//void printList(std::list<TaskObject>);


int main()
{
	//should I create a Class?

	class TaskObject {

	public:
		int listNum;
		string taskName;

		TaskObject() {
			listNum = 1;
			taskName = "sometask";
		}
		void TaskAssign(int tNum, string tString) {
			listNum = tNum;
			taskName = tString;
			
		}
		//^^^^^^^^^Fix this ^^^^^^^^^^^^^
	};
	//wrap this into a textbox of some kind, add a submit button
	
	
	int loadingString;
	int taskNum;

	//create a list of taskObject objects to store values.
	cout << "Enter your TaskList" << endl;
	taskNum = 1;
	string taskItem;
	//list is global so that other functions have access.

	std::list<TaskObject> ToDoList;
	ToDoList.clear;
	//create a new list of TaskList objects. Figure out how to make it varying in size or assign a large number of spaces.

			for (loadingString = 0; loadingString < taskNum; loadingString++)
			{
				taskItem = resultString();
				
				TaskObject TaskList;
				//Declare a new object of type TaskObject named TaskList
				

				//cout << to_string(TaskList.listNum) + " : " + TaskList.taskName << endl;
				//cout << to_string(taskNum) +" ";
				//cout << taskItem << endl;

				//assign data to TaskList object
				TaskList.TaskAssign(taskNum, taskItem);
				
				//Data should now persist in the tasklist
				//cout << to_string(TaskList.listNum) + " : " + TaskList.taskName << endl;
				//cout << to_string(taskNum)  + " ";
				//cout << taskItem << endl;
				
				taskNum++;

				if (taskItem == "complete") {
					break;
				}
				//assign TaskList object to ToDoList
				ToDoList.resize(1);
				ToDoList.push_back(TaskList);
				ToDoList.get_allocator;
				
				//why isnt this working?
				//Create persistent storage container:List. 
				//print list to assert items were added to list... 
				
				
			}

			//Put TaskObject assignment into TaskList as TaskList[n].

			//This should be done at the end of assigning task items.
			
			
			//Optional Done button should call a method that displays a strike through of already done items. Or deletes done items
			//Optional delete button to delete items that are deemed not worthy of being done.

			//Close button to call finished. Ie: set taskItem to complete.
	return 0;



	//Figure out how to add the GTK libraries to build cross platform UI to this project. They can be located in D:/Gtkmm
}
