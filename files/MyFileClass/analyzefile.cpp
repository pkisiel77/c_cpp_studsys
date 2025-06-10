#include "analyzefile.hpp"
#include <sstream>

int AnalyzedFile::countWords()
{
    if (_lines.empty())
    {
        return 0;
    }

    int spaces = 0;
    for (std::string line : _lines)
    {
        for (char c : line)
        {
            // std::isspace(char)
            if (c == ' ')
                spaces++;
        }
    }

    return spaces;
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
    // liczba wierszy
    // liczba słów
    // liczba bajtów pliku
}

std::vector<std::string> AnalyzedFile::split(const std::string &str, char delimiter)
{
    std::vector<std::string> tokens;
    std::stringstream ss(str);
    std::string token;

    while (std::getline(ss, token, delimiter))
    {
        tokens.push_back(token);
    }

    return tokens;
}

std::vector<std::string> AnalyzedFile::split2(const std::string &str, char delimiter)
{
    std::vector<std::string> result;
    size_t start = 0;
    size_t end = 0;

    while ((end = str.find(delimiter, start)) != std::string::npos)
    {
        result.emplace_back(str.substr(start, end - start));
        start = end + 1;
    }

    result.emplace_back(str.substr(start));
    return result;
}
