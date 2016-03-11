#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "resultString.h"
#include <Windows.h>
#include <vector>
#include "resource.h"

using namespace std;

class TaskObject {

public:
	int listNum;
	string taskName;
	

	TaskObject() {
		listNum = 1;
		taskName = "somestring";
		
	}

	TaskObject(int tNum, string tString) {
		listNum = tNum; 
		taskName = tString;
	}

};


ostream& operator<< (ostream& stream, const TaskObject& a)
{

	stream << to_string(a.listNum) + " : " + a.taskName ;
	stream << endl;


	return stream;
}

inline bool operator== (TaskObject task1, TaskObject task2) {
	if ((task1.listNum == task1.listNum) & (task1.taskName == task2.taskName)) {
		return true;
	}
	else { return false; }
}

int main()
{
	//Input Your TaskList	
	cout << "Enter your TaskList" << endl;

	//var TaskNum and string TaskItem declared
	int taskNum = 1;
	string taskItem;
	
	//Vector initialized, cleared and resized to hold TaskObject values
	std::vector<TaskObject> ToDoList;
	ToDoList.clear();
	ToDoList.resize(1);
	

	while (taskItem != "complete")//placeholder for an exit button/event
	{

		//taskItem initialized to result of external function resultString();
		taskItem = resultString();
		if (taskItem == "complete") { break; }
		
		//TaskListObject created and set to pass values via object constructor.
		TaskObject TaskListObject(taskNum, taskItem);
		
			if (taskItem != TaskListObject.taskName) {
				cout << "object not assigned";
				break;
			}
		
		//increment taskNum;
		taskNum++;
		

		//Assign TaskObjects to the ToDoList vector.
		unsigned int listindex = 0;
		ToDoList[listindex] = TaskListObject;
		TaskObject* ptr = &ToDoList[listindex];
		TaskObject taskAssigned = *ptr;
		listindex++;
	    ToDoList.reserve(listindex);

		//Print the actual ToDoList; previous code to make sure that TaskObjects have been assigned has been removed in favor of printing the list by index.
		unsigned int index = 0;
		TaskObject * ptr2 = &ToDoList[0];
		while (index <= (ToDoList.capacity() - 1))
			{
			
				ptr2 = &ToDoList[index];
				cout << *ptr2;
				if (index == ToDoList.capacity()) {
					break;
				}
				index++;
			}

		}
	



	//Optional Done button should call a method that displays a strike through of already done items. Or deletes done items
	//Optional delete button to delete items that are deemed not worthy of being done.

	//Close button to call finished. Ie: set taskItem to complete.

	return 0;
}


	//UI Gtkmm, Mongoose, TreeFrog Framework, or CppCMS for MVC build
