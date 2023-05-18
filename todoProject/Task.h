#pragma once
#include <iostream>
#include <string.h>

//Simple class for our tasks, each task has a name, priority, and time.
class Task
{

private:
	int idNum = 0;
	std::string taskName = "";
	int priority = 0;
	int time = 0;
public:
	Task(std::string name_val, int priority_val, int time_val) { taskName = name_val; priority = priority_val; time = time_val; }
	std::string getTaskname() { return taskName; }
	int getPriority() { return priority; }
	int getTime() { return time; }
	void setTaskname(std::string userinp, Task* task) { task->taskName = userinp; }
	void setPriority(int choice, Task* task) { task->priority = choice; }
	void setTime(int time, Task* task) { task->time = time; }
};