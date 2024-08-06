#include "Task.h"

using namespace std;

int Task::id = 1;

Task::Task(string title, time_t startDate, time_t endDate, string note)
	: title(title), startDate(startDate), endDate(endDate),
	note(note)
{
	setId(id++);
}

string Task::getTitle()
{
	return title;
}

time_t Task::getStartDate()
{
	return startDate;
}

time_t Task::getEndDate()
{
	return endDate;
}

string Task::getNote()
{
	return note;
}

void Task::setId(int id)
{
	this->id = id;
}

void Task::setTitle(string title)
{
	this->title = title;
}

void Task::setNote(string note)
{
	this->note = note;
}