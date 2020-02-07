#include "File.h"
#include "Folder.h"
#include "Markdown.h"

int main()
{
    std::filesystem::path root{"."};
    std::filesystem::recursive_directory_iterator iter{root};
    for (const auto& item : iter)
    {
        if (item.is_directory())
        {

        }
    }
}