#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress)
{
    if (macAddress == "FF:FF:FF:FF:FF:FF")
        return "Broadcast";

    int x;
    std::stringstream stream;
    stream << macAddress.substr(0, 2);
    stream >> std::hex >> x;

    return (x % 2)
               ? "Multicast"
               : "Unicast";
}
