#include "Task.h"
#include <string>
#include <vector>
#include <filesystem>
#include <fstream>
#include <algorithm>

void saveTasksToFile(const std::vector<Task>& tasks, const std::string& fileName)
{
	std::ofstream ostream(fileName);
}

std::vector<Task> loadTasksFromFile(const std::string& fileName)
{
	return std::vector<Task>();
}
