#pragma once
#include <iostream>
#include <string.h>


//Simple class for our tasks, each task has a name, time, and description
class Task
{
private:
	int idNum;
public:
	std::string taskName;
	int priority;
	int time;
	std::string desc;
};