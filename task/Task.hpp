#pragma once

#include "utils/TaskUtils.hpp"
#include <ctime>
#include <iostream>
#include <ostream>
#include <string>

class Task {
  private:
    int id;
    std::string description;
    std::string status;
    std::string createdAt;
    std::string updatedAt;

    static TaskUtils utils;

  public:
    Task() = default;
    Task(int &id, std::string &description, std::string &status);

    ~Task() = default;

    int getId() const;
    void setId(int &id);

    std::string getDescription() const;
    void setDescription(std::string &description);

    std::string getStatus() const;
    void setStatus(std::string &status);

    std::string getCreatedAt() const;
    void setCreatedAt(std::string &createdAt);

    std::string getUpdatedAt() const;
    void setUpdatedAt(std::time_t &updatedAt);
    void setUpdatedAt(std::string &updatedAt);
    friend std::ostream &operator<<(std::ostream &os, const Task &task);
};
