#pragma once

#include "../Task.hpp"
#include <fstream>
#include <memory>
#include <string>
#include <vector>

class TaskDao {
  private:
    static std::unique_ptr<std::ifstream> in;
    static std::unique_ptr<std::ofstream> out;

    void write() const;

  public:
    const static std::unique_ptr<std::vector<Task>> buffer;
    TaskDao() = default;
    TaskDao(std::string &&destionation);
    ~TaskDao();

    void read();
};
