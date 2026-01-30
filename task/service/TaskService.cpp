#include "TaskService.hpp"

void TaskService::goThrough(std::vector<Task> &tasks,
                            std::string status) const {
    for (int i = 0; i < tasks.size(); i++) {
        if (tasks[i].getStatus() == status) {
            std::cout << tasks[i] << std::endl;
        }
    }
}

void TaskService::printTasks(std::vector<Task> &tasks,
                             std::string &status) const {
    if (tasks.empty()) {
        std::cout << "You don't have any tasks." << std::endl;
        return;
    }

    if (status.empty()) {
        for (int i = 0; i < tasks.size(); i++) {
            std::cout << tasks[i] << std::endl;
        }
    } else if (status == "todo") {
        goThrough(tasks, status);
    } else if (status == "in-progress") {
        goThrough(tasks, status);
    } else if (status == "done") {
        goThrough(tasks, status);
    } else {
        throw "Undefined status '" + status + "'!";
    }
}

void TaskService::update(int &id, std::string &description,
                         std::vector<Task> &tasks) {
    for (int i = 0; i < tasks.size(); i++) {
        if (tasks[i].getId() == id) {
            tasks[i].setDescription(description);
            return;
        }
    }

    throw "Task with id " + std::to_string(id) + " not found!";
}

void TaskService::remove(int &id, std::vector<Task> &tasks) {
    for (int i = 0; i < tasks.size(); i++) {
        if (tasks[i].getId() == id) {
            tasks.erase(tasks.begin() + i);
            return;
        }
    }
    throw "Task with id " + std::to_string(id) + " not found!";
}

void TaskService::markAs(int &id, std::string &&status,
                         std::vector<Task> &tasks) {
    if (status == "done" || status == "in-progress") {
        for (int i = 0; i < tasks.size(); i++) {
            if (tasks[i].getId() == id) {
                tasks[i].setStatus(status);
                return;
            }
        }
    } else {
        throw "Undefined status '" + status + "'!";
    }
    throw "Task with id " + std::to_string(id) + " not found!";
}
