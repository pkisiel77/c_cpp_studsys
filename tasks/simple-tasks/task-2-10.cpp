#include <iostream>
#include <vector>

class Student
{
private:
    std::string _imie;
    int _wiek;

public:
    Student(const std::string &imie, int wiek) : _imie(imie), _wiek(wiek)
    {
    }

    void print()
    {
        std::cout << _imie << " " << _wiek << std::endl;
    }
};

int main()
{
    Student s1("Ala", 25);
    Student s2("Antek", 25);

    std::vector<Student> listaStudentow;

    listaStudentow.push_back(s1);
    listaStudentow.push_back(s2);

    for (Student& s : listaStudentow)
    {
        s.print();
    }
}