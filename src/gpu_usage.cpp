#include <iostream>
#include "gpu_usage.h"

float getGpuUsage() {
    // Placeholder for actual GPU usage retrieval logic
    return 75.0f; // Example usage percentage
}

void displayGpuUsage() {
    float usage = getGpuUsage();
    std::cout << "GPU Usage: " << usage << "%" << std::endl;
}