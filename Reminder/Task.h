#pragma once
#include <string>
#include <ctime>

class Task
{
private:
	static int id;
	std::string title;
	std::time_t startDate;
	std::time_t endDate;
	std::string note;

	// make an enum for specifying repeat intervals (maybe???)
	// make an enum for specifying priority (maybe???)

public:
	Task(std::string title, std::time_t startDate, std::time_t endDate, std::string note);
	
	std::string getTitle();
	std::time_t getStartDate();
	std::time_t getEndDate();
	std::string getNote();

	void setId(int id);
	void setTitle(std::string title);
	void setNote(std::string note);
};