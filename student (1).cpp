#include <iostream>
#include "student.hpp"
using namespace std;

Student::Student(std::string nachname, std::string vorname, unsigned int matrikelnummer)
{   
    nachname = " ";
    vorname = " ";
    matrikelnummer = 0;
}

void Student::setStudent()
{
    cout << "Geben Sie die Nachname ein: " << endl;
    std::getline(cin, nachname);
    cout << "Geben Sie die Vorname ein: " << endl;
    std::getline(cin, vorname);
    cout << "Geben Sie die Matrikelnummer ein: " << endl;
    cin>>matrikelnummer;
    cout << "\n" << endl; 
}

void Student::getStudent()
{
    cout << "Nachname = " << nachname << endl;
    cout << "Vorname = " << vorname << endl;
    cout << "Matrikelnummer = "<< matrikelnummer <<endl<<endl;
}

