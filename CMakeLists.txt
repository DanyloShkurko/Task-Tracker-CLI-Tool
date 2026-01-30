cmake_minimum_required(VERSION 3.23)

set(CMAKE_CXX_FLAGS "-g")

project(TaskTrackerCLITool)

add_executable(task-cli)

target_sources(task-cli
  PRIVATE

  Application.hpp
  Application.cpp

  main.cpp

  task/Task.hpp
  task/Task.cpp

  task/service/TaskService.hpp
  task/service/TaskService.cpp

  task/dao/TaskDao.hpp
  task/dao/TaskDao.cpp

  task/cli/TaskCLI.hpp
  task/cli/TaskCLI.cpp
)
