#include <iostream>
#include <fstream>
using namespace std;

void readFile()
{
    // Create a text string, which is used to output the text file
    string myText;

    // Read from the text file
    ifstream MyReadFile("filename.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline(MyReadFile, myText))
    {
        // Output the text from the file
        cout << myText << endl;
    }

    // Close the file
    MyReadFile.close();
}

void saveFile()
{
    // Create and open a text file
    ofstream MyFile("filename.txt", std::ios::app);

    // Write to the file
    MyFile << "Files can be tricky, but it is fun enough!\n";
    MyFile << "Ala ma kota\n";
    MyFile << "Ola ms kota\n";

    // Close the file
    MyFile.close();
}
