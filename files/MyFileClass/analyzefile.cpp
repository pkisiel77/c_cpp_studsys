#include "analyzefile.hpp"
#include <sstream>

int AnalyzedFile::countWords()
{
    if (_lines.empty())
    {
        return 0;
    }

    return -1;
}

int AnalyzedFile::countOccurrences(const std::string &word)
{
    if (_lines.empty() || word.empty())
        return 0;

    int count = 0;
    for (const auto &line : _lines)
    {
        std::istringstream iss(line);
        std::string w;
        while (iss >> w)
        {
            if (w == word)
                ++count;
        }
    }
    return count;
}

int AnalyzedFile::countFileLines()
{
    if (!_lines.empty())
    {
        return _lines.size();
    }
    return 0;
}

void AnalyzedFile::toUpperCase()
{
}

void AnalyzedFile::toLowerCase()
{
}

void AnalyzedFile::showStats()
{
}
