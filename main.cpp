#include <stdio.h>
#include <fstream>
#include <string>

int main(int argc, char const *argv[])
{
    std::ofstream out("WPD2.txt", std::ofstream::out);
    std::ifstream file("WPD.txt");
    std::string line;

    while (std::getline(file, line))
    {
        if (line.length() >= 8) {
            out << line.append("\n").c_str();
        }
    }

    return 0;
}
