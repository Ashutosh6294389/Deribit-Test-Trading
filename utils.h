#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <iostream>
#include <fstream>
#include <ctime>

namespace utils {

    // Log levels
    enum LogLevel {
        INFO,
        WARNING,
        ERROR
    };

    // Function to log messages with timestamps
    void logMessage(LogLevel level, const std::string &message);

    // Utility function to get the current time in string format
    std::string getCurrentTime();

    // Function to write logs to a file
    void writeLogToFile(const std::string &message);

} // namespace utils

#endif // UTILS_H
