# MarkdownGenerator
 Generate .md with source files and directory

## Example
Suppose in the current directory, we have files strctures like the following:
```
./
    /include
        a.h
        b.h
    /src
        a.cpp
        b.cpp
        main.cpp
    /documentation
        c.txt
        d.txt
        /details
            additional_details.txt
```
The generated ``markdown`` will be something like this:
```markdown
## include
- a.h
- b.h
## src
- a.cpp
- b.cpp
## documentation
- c.txt
- d.txt
### details
- additional_details.txt
```
The program will generate a ``n level header`` for each ``n level directory``. And an ``entrace`` for each file. 

**TODO**: Add support for reading the content and description in the actual files.

## Aditional Note
This is a further practice for utilizing ``std::filesystem`` in ``C++17``. Additionaly, using a tree data structure.
