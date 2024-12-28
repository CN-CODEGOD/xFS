#include "cpu_usage.h"
#include <iostream>
#include <fstream>
#include <string>
#include <thread>
#include <chrono>
#include <sstream> // Include necessary header for std::istringstream

struct CpuStats {
    long user;
    long nice;
    long system;
    long idle;
};

CpuStats getCpuStats() {
    std::ifstream file("/proc/stat");
    std::string line;
    CpuStats stats = {0, 0, 0, 0};
    if (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string cpu;
        iss >> cpu >> stats.user >> stats.nice >> stats.system >> stats.idle;
    }
    return stats;
}

float calculateCpuUsage(const CpuStats& prev, const CpuStats& curr) {
    long prevIdle = prev.idle;
    long currIdle = curr.idle;

    long prevNonIdle = prev.user + prev.nice + prev.system;
    long currNonIdle = curr.user + curr.nice + curr.system;

    long prevTotal = prevIdle + prevNonIdle;
    long currTotal = currIdle + currNonIdle;

    long totalDiff = currTotal - prevTotal;
    long idleDiff = currIdle - prevIdle;

    return (static_cast<float>(totalDiff - idleDiff) / totalDiff) * 100.0f;
}

float getCpuUsage() {
    CpuStats prevStats = getCpuStats();
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    CpuStats currStats = getCpuStats();
    return calculateCpuUsage(prevStats, currStats);
}

void displayCpuUsage() {
    float cpuUsage = getCpuUsage();
    std::cout << "CPU Usage: " << cpuUsage << "%" << std::endl;
}