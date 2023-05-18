#include <string.h>
#include <iostream>
#include <vector>
#include "Task.h"


//Setters
void setTaskname(std::string userinp, Task task)
{
	task.taskName = userinp;
	std::cout << "Set task name as " + task.taskName << std::endl;
}

void setPriority(int choice, Task task)
{
	task.priority = choice;
	std::cout << "Set the priority to " + task.priority << std::endl;

}

void setTime(int time, Task task)
{
	task.time = time;
	std::cout << "Set the time to " + task.time << std::endl;
}

void setDesc(std::string desc, Task task)
{
	task.desc = desc;
	std::cout << "Set the desc to " + task.desc << std::endl;
}



