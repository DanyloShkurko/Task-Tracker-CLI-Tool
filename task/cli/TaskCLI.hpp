#pragma once
#include "../dao/TaskDao.hpp"
#include "../service/TaskService.hpp"
#include <memory>
#include <string>

class TaskCLI {
  private:
    std::shared_ptr<TaskDao> dao;
    std::shared_ptr<TaskService> service;

    void displayHelp();

  public:
    TaskCLI(std::shared_ptr<TaskDao> dao, std::shared_ptr<TaskService> service);
    ~TaskCLI() = default;

    void help();

    void add(int &id, std::string &description);
    void list(std::string &status);
    void update(int &id, std::string &description);
    void remove(int &id);
    void markInProgress(int &id);
    void markDone(int &id);
};
