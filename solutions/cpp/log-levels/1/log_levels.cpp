#include <string>

namespace log_line {
    std::string message(std::string log) {
        int index = log.find(": ") + 2;
        return log.substr(index);
    }

    std::string log_level(std::string log) {
        int start = log.find("[");
        int end = log.find("]");
        return log.substr(start + 1, end - 1);
    }

    std::string reformat(std::string log) {
        return message(log) + " (" + log_level(log) + ")";
    }
} // namespace log_line
