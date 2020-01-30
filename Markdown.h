#pragma once
#include <fstream>
#include <string>
#include "File.h"
#include "Folder.h"
enum class indent {};
enum class newln {};

class Markdown
{
    std::fstream mdfile;
    int level = 0;

    Markdown& operator<<(indent);
    Markdown& operator<<(newln);
public:
    Markdown(std::string const& fileName = "README.md");
    /*delete copying*/
    Markdown(Markdown const&) = delete;
    Markdown& operator=(Markdown const&) = delete;
    /*enable moving*/
    Markdown(Markdown&&) = default;
    Markdown& operator=(Markdown&&) = default;

    void addFile(File const& file);
    void addFolder(Folder const& folder);
    void addDescription(std::string const& description);

};

