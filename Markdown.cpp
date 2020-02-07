#include "Markdown.h"
#include <exception>

Markdown& Markdown::operator<<(indent)
{
	auto count = level;
	while (count-- > 0)
		mdfile << '\t';
}

Markdown& Markdown::operator<<(newln)
{
	mdfile << '\n';
}

Markdown::Markdown(std::string const& fileName):mdfile(fileName)
{
	if (!mdfile.is_open())
		throw std::runtime_error(fileName + " is not created correctly!");
}

void Markdown::addFile(File const& file)
{
	mdfile << "- " << file.filepath;
	auto&& description = file.getDiscription();
	if (!description.empty())
		mdfile << description;
	mdfile << '\n';
}

void Markdown::addFolder(Folder const& folder)
{
	auto count = ++level;
	while (count--)
		mdfile << '#';
	mdfile << ' ' << folder;

}

