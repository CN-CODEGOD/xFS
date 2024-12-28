#include <iostream>
#include "include/gpu_usage.h"
#include "include/cpu_usage.h"

int main() {
    std::cout << "Initializing application..." << std::endl;

    displayGpuUsage();
    displayCpuUsage();

    return 0;
}