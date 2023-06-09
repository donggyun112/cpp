#include <ctime>
#include <iostream>

std::string getCurrentLocalTime()
{
    std::time_t currentTime = std::time(NULL);
    std::tm* localTime = std::localtime(&currentTime);

    char timeString[100];
    std::strftime(timeString, sizeof(timeString), "%Y%m%d_%H%M%S", localTime);

    return std::string(timeString);
}

int main()
{
    std::string currentTime = getCurrentLocalTime();
    std::cout << currentTime << std::endl;

    return 0;
}
