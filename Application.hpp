#pragma once
#include <getopt.h>

class Application {
  private:
  public:
    Application() = default;
    ~Application() = default;

    void run(int &argc, char *argv[]);
};
