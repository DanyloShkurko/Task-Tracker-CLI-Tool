#pragma once

#include "../Task.hpp"
#include <vector>

class TaskService {
  private:
    void goThrough(std::vector<Task> &tasks, std::string status) const;

  public:
    TaskService() = default;
    void printTasks(std::vector<Task> &tasks, std::string &status) const;

    void update(int &id, std::string &description, std::vector<Task> &tasks);
    void remove(int &id, std::vector<Task> &tasks);
    void markAs(int &id, std::string &&status, std::vector<Task> &tasks);
};
