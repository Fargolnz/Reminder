#include "List.h"

using namespace std;

int List::id = 1;

List::List(std::string title, std::time_t startDate, std::time_t endDate, std::string note)
	: title(title), startDate(startDate), endDate(endDate),
	note(note)
{
	setId(id++);
}

string List::getTitle()
{
	return title;
}

time_t List::getStartDate()
{
	return startDate;
}

time_t List::getEndDate()
{
	return endDate;
}

string List::getNote()
{
	return note;
}

void List::setId(int id)
{
	this->id = id;
}

void List::setTitle(string title)
{
	this->title = title;
}

void List::setNote(string note)
{
	this->note = note;
}