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

// Cant seem to figure out how to overload the << operator to accept my TaskObject values.
ostream& operator<< (ostream& stream, const TaskObject& a)///T is undefined but should be template letter?
{

	stream << to_string(a.listNum) + " : " + a.taskName ;
	stream << endl;


	return stream;
}

inline bool operator== (TaskObject task1, TaskObject task2) {
	if ((task1.listNum == task1.listNum) & (task1.taskName == task2.taskName))
	return true;
}

int main()
{
	int loadingString;
	int taskNum;

	//create a list of taskObject objects to store values.
	cout << "Enter your TaskList" << endl;
	taskNum = 1;
	string taskItem;
	//list is global so that other functions have access.
	std::vector<TaskObject> ToDoList;
	ToDoList.clear();
	ToDoList.resize(1);
	//create a new list of TaskList objects. Figure out how to make it varying in size or assign a large number of spaces.

	for (loadingString = 0; loadingString < taskNum; loadingString++)
	{
		unsigned int size = ToDoList.capacity();
		for (unsigned int listloop = 0; listloop < size; listloop++) {

		taskItem = resultString();
		//set value of taskItem
		TaskObject TaskListObject(taskNum, taskItem);
		//pass values to object constructor; should assign to object properties
		
		if (taskItem != TaskListObject.taskName) {
			cout << "object not assigned";
			break;
		}
		//This if statement is a placeholder for a future UI exit button.
		else if (taskItem == "complete"){
			break;
		}
		taskNum++;
		//increment tasknum
		ToDoList.resize(taskNum);
		//resize the vector/list

		//Double nesting loop to prevent it from changing my previous ToDoList values.
	
			ToDoList[listloop] = TaskListObject;
			TaskObject* ptr = &ToDoList[listloop];
			TaskObject taskAssigned = *ptr;
			listloop++;
			ToDoList.reserve(listloop);
			//resize my vector again.
			ptr++;
			//increment pointer
			
			//cout << taskAssigned;
			//print indexed value, should match TaskObject.
			
			if (taskAssigned == TaskListObject) {
				cout << "TaskListObject has been assigned to TaskList";
			}	
			
		}

	//print entire ToDoList

	}

	//Optional Done button should call a method that displays a strike through of already done items. Or deletes done items
	//Optional delete button to delete items that are deemed not worthy of being done.

	//Close button to call finished. Ie: set taskItem to complete.
	return 0;
}


	//UI Gtkmm or Mongoose.
