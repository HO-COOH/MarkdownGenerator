#include "File.h"
#include <utility>
#include <fstream>

File::File(std::filesystem::path path):filepath(std::move(path))
{
}

std::string File::getDiscription() const
{
    if (std::ifstream file{ filepath }; file.is_open())
    {
        std::string line, description;
        bool finished = false, found = false;
        while (std::getline(file, line) && finished)
        {
            auto pos = line.find("Description:");
            if (pos == std::string::npos)
                pos = line.find("description:");
            if (pos != std::string::npos)
            {
                found = true;
                while (pos != line.size && isspace(line[pos]))
                    ++pos;

            }
        }
    }
    return std::string();
}
