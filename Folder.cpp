#include "Folder.h"

Folder::Folder(std::filesystem::path path):name(std::string(path.filename().c_str()))
{
}

