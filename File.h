#pragma once
#include <filesystem>
#include <string>

//File: moveable, non-copyable
struct File
{
    std::filesystem::path filepath;
    explicit File(std::filesystem::path path);
    ~File() = default;
    File(File&& r) noexcept = default;
    File(File const& r) = delete;
    File& operator=(File&& r) noexcept = default;
    File& operator=(File const& r) = delete;

    /*functions*/
    std::string getDiscription() const;
};

