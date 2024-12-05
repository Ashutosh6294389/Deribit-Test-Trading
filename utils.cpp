#include "utils.h"
#include <iomanip>
#include <sstream>

namespace utils {

    // Log the message with level and timestamp
    void logMessage(LogLevel level, const std::string &message) {
        std::string levelStr;
        switch (level) {
            case INFO:
                levelStr = "INFO";
                break;
            case WARNING:
                levelStr = "WARNING";
                break;
            case ERROR:
                levelStr = "ERROR";
                break;
        }

        std::string logMsg = "[" + getCurrentTime() + "] [" + levelStr + "] " + message;
        std::cout << logMsg << std::endl;
        writeLogToFile(logMsg);
    }

    // Get the current time in string format (e.g., YYYY-MM-DD HH:MM:SS)
    std::string getCurrentTime() {
        std::time_t now = std::time(nullptr);
        std::tm* tmNow = std::localtime(&now);
        std::stringstream ss;
        ss << std::put_time(tmNow, "%Y-%m-%d %H:%M:%S");
        return ss.str();
    }

    // Write the log message to a log file
    void writeLogToFile(const std::string &message) {
        std::ofstream logFile;
        logFile.open("system.log", std::ios::app); // Open file in append mode
        if (logFile.is_open()) {
            logFile << message << std::endl;
            logFile.close();
        } else {
            std::cerr << "ERROR: Unable to open log file!" << std::endl;
        }
    }

} // namespace utils
