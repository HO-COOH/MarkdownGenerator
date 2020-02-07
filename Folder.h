#pragma once
#include <string>
#include <filesystem>
struct Folder
{
	std::string name;
	explicit Folder(std::filesystem::path path);
	~Folder() = default;
	Folder(Folder&& r) noexcept = default;
	Folder(Folder const& r) = delete;
	Folder& operator=(Folder && r) noexcept = default;
	Folder& operator=(Folder const& r) = delete;

};

